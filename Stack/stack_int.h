#ifndef STACK_INT_H
#define STACK_INT_H
// This header file includes function declarations for stack_int 
// This header file is only to be used for the creation of integer type stacks.

typedef struct stack_int stack_int;

int isFull(stack_int* );
int isEmpty(stack_int* );
int top(stack_int* );
void pop(stack_int* );
void push(stack_int *,int);
stack_int* make_stack(int );
void free_stack(stack_int* );
#endif 