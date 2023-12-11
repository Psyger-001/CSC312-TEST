#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 100

typedef struct {
    double *stack;
    int top;
    int capacity;
} Stack;

Stack *create_stack(int capacity) {
    Stack *stack = malloc(sizeof(Stack));
    stack->stack = malloc(capacity * sizeof(double));
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}

void push(Stack *stack, double item) {
    if (stack->top == stack->capacity
      stack->capacity *= 2;
        stack->data = realloc(stack->data, stack->capacity * sizeof(double));
    }
    stack->data[stack->size++] = value;
}

int main() {
    Stack stack = {NULL, 0, 1};
    push(&stack, 3.14);
    push(&stack, 2.71);
    printf("%f\n", stack.data[0]);
    printf("%f\n", stack.data[1]);
    free(stack.data);
    return 0;
}















