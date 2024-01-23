
# conditional rendering

There are lots of ways to conditionally render styles in HTML/CSS/JS.

### 1. pseudo classes

```
a:hover {
  color: red;
}

translation:
  when the user hovers over the link, the text should be red
```



### 2. media queries

```
@media (prefers-color-scheme: dark) {
  a {
    color: red;
  }
}

translation:
  when the browser is set to dark mode, the text should be red
```

### 3. override using the cascade

```
a {
  color: blue;
}

a.red {
  color: red;
}

translation:
  when the link has the 'red' class applied, the text should be red
```

### 4. clamp

```
a {
  font-size: clamp(10px, 1vw, 30px);
}

translation:
  the font-size should be 1% of the viewport width
  when 1% of the viewport width is less than 10px, the font-size should be 10px
  when 1% of the viewport width is greater than 30px, the font-size should be 30px
```

### 5. min/max

```
a {
  width: min(50vw, 100px);
}

translation:
  the link width should be either half the viewport width or 100px, whichever is smallest
```

### 6. min-x/max-x

```
a {
  width: auto;
  min-width: 100px;
}

translation:
  the link's width should be inferred automatically, but should be no less than 100px
```

### 7. using javascript

There are a multitude of ways to do this, so it's not even worth going into detail.
In most cases, however, this is a function that receives some bit of application state as its input.
The function reads the state and applies one or more classes to the target html, depending on the result of the read.

That primary use case is for enumerated state, but JS is also used for non-enumerated state as well.
An example of enumerated state is light-mode or dark-mode.
There can only ever be two states, even if the effects of that state are not enumerated.
An example of non-enumerated state is the viewport width.
Practically speaking, there is a finite set of pixel dimensions available for most screens.
But insofar as our code is concerned, these are not explicitly enumerated.

Anyways, the point of listing these methods for conditional rendering is to illustrate the sheer breadth of options available in web technology.
Some aspects of this architecture:

Pros:
1. It's highly flexible

Cons:
1. It is difficult to understand all of the options available, since they are so myriad
2. When developing real applications, it's very difficult to keep these various states in sync with one another
3. The number of syntactic conventions makes it difficult for non-domain-experts to reason about the code (i.e. designers)

## Is there an opportunity to improve?

This isn't a leading question, I'm honestly curious.
I've wanted Matry to have a very consistent interface for conditional rendering,
since it's so crucial to designer's ability to specify their decisions.

When you declare that a particular element should have a particular style,
you've only told part of the story.
Ultimately, designers need to decide, specify, and showcase how an element's style may change throughout the lifecycle of an application.
Since many designers are new to coding, it would be important to favor simplicity over flexibility when designing the syntax.

This was my original desire for the `when` keyword.
It represents a consistent syntactic structure that is used for _all_ changes to visual state.
At transpilation time, the conditional expression would be converted to one of the above 7 formats, depending on the expression used.

It was a nice idea, _in theory_.

In reality, it leads to highly verbose code that feels cumbersome to write.
Consider the example from earlier:

```
a {
  color: black;
}

a:hover {
  color: red;
}
```

In Matry, it would look like this:

```
style link {
  text-color: black
}

style link when $hover is on {
  text-color: red
}
```

Oof, there's a lot more text to read.
The intention was to have a syntax that reads like the spoken word.
It mimics a phrase a designer might use in the real world:

> When the user hovers over the link, make the text red

In some sense, it makes sense.
The code, for a newcomer, is certainly more readable.
But still...I can't help feel that it's clunky and cluttered.
Not to mention that it still doesn't quite mimic a real phrase.

A more realistic phrasing might be:

```
style link when @link is hovered {
  text-color: red
}
```

In this syntax, other elements can be referenced by name.
And `hovered` would be some system-defined attribute.

Still, this doesn't feel right.
It prioritizes the first impression, and in that way is akin to an advertisement.
But as time goes on, and the user becomes more familiar with the syntax, the verbosity would be a hindrance.

My aim is to create a professional design tool,
and one way to distinguish a professional tool is to prioritize recurring usage over first impressions.

In other words, professional tools are allowed to expect their users to ascend a learning curve to use the tool.
There can be guides and other assistive methods in place to help the user,
but overall the tool should be geared towards making the user as productive as possible.

So in this sense, I have a contradiction.
I want to make an inviting space for designers to experiment with writing code.
But I also want to create a professional tool.

## First Principles

My intuition here is to go high level and think through things again at a high level.
Fundamentally, we need to give designers the ability to express changes to style attributes for graphic nodes through the lifecycle of an application.

The specifics of the state change are _almost_ irrelevant, though not _entirely_ irrelevant.
The types of changes to a graphical node can come from a variety of places.

- Environment. Things such as light mode vs dark mode, pixel density, screen width and height, etc.
- User interaction. Hovering, pressing, dragging, etc.
- Changes to surrounding nodes. If the width of the containing node changes, for instance.
