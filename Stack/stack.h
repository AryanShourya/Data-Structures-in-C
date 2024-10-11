#ifndef STACK_H
#define STACK_H
// This header file includes file to implement stack in c program files.


typedef enum dataflag dataflag;
typedef struct stack stack;

int isFull(stack* );
int isEmpty(stack* );
int top_int(stack* );
float top_float(stack* );
double top_double(stack* );
char top_char(stack* );
void pop(stack* );
void push_int(stack *,int);
void push_float(stack *,float);
void push_double(stack *,double);
void push_char(stack *,char);
stack* create_stack(char ,int );
void free_stack(stack* );
#endif 