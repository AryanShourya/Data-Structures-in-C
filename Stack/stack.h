#ifndef STACK_H
#define STACK_H
// This header file includes function declarations for stack

struct stack{
    void *arr;
    int capacity;
    int size;
}typedef stack;

int isFull(stack );
int isEmpty(stack );
int top(stack );
int pop(stack );
int push(stack );
int make_stack(char ,int );
#endif 