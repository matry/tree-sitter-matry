#include "stack.h"
#include <stdio.h>

void popUntil(Stack *s, int value) {
  while (!isEmpty(s)) {
    if (peek(s) <= value) {
      break;
    }
    pop(s);
  }
}

int main() {
  Stack myStack;
  initStack(&myStack);

  push(&myStack, 5);
  push(&myStack, 20);
  push(&myStack, 35);

  pop(&myStack);

  printf("top is %i\n", myStack.top);

  return 0;
}
