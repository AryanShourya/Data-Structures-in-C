#ifndef STACK_H
#define STACK_H
// This header file includes file to implement stack in c program files.


typedef enum dataflag dataflag;
typedef struct stack_int stack_int;

int isFull(stack_int* );
int isEmpty(stack_int* );
int top_int(stack_int* );
float top_float(stack_int* );
double top_double(stack_int* );
char top_char(stack_int* );
void pop(stack_int* );
void push_int(stack_int *,int);
void push_float(stack_int *,float);
void push_double(stack_int *,double);
void push_char(stack_int *,char);
stack_int* create_stack(char ,int );
void free_stack(stack_int* );
#endif 