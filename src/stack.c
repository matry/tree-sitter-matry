#include "stack.h"

void initStack(Stack *s) {
  s->top = -1;
}

int isFull(Stack *s) {
  return s->top == MAX - 1;
}

int isEmpty(Stack *s) {
  return s->top == -1;
}

void push(Stack *s, int newItem) {
  if (isFull(s)) {
    return;
  }

  s->top++;
  s->items[s->top] = newItem;
}

int pop(Stack *s) {
  if (isEmpty(s)) {
    return -1;
  } else {
    int poppedItem = s->items[s->top];
    s->top--;
    return poppedItem;
  }
}

int peek(Stack *s) {
  if (isEmpty(s)) {
    return -1;
  }

  return s->items[s->top];
}
