#ifndef STACK_H
#define STACK_H

#define MAX 100

typedef struct {
  int items[MAX];
  int top;
} Stack;

void initStack(Stack *s);
int isFull(Stack *s);
int isEmpty(Stack *s);
void push(Stack *s, int newItem);
int pop(Stack *s);
int peek(Stack *s);

#endif
