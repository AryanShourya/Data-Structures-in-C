#ifndef STACK_INT_H
#define STACK_INT_H
// This header file includes function declarations for stack

struct stack_int{
    int *arr;
    int capacity,size,topindx;
}typedef stack;

int isFull(stack* );
int isEmpty(stack* );
int top(stack* );
void pop(stack* );
void push(stack *);
stack* make_stack(char ,int );
#endif 