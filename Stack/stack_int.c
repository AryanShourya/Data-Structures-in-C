// This file contains function definations of 'stack_int.h' header file
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"stack_int.h"

struct stack_int{
    int* arr;
    int size;
    int capacity;
    int topindx;
};

stack_int* make_stack(int s)
{
    // use dynamic memory allocation to allocate memory for stack struct.
    stack_int *s1= (stack_int*)malloc(sizeof(stack_int)*1);
    //set capacity to s . 
    s1->capacity=s;
    // set current size of stack to 0.
    s1->size=0;
    // set top index to -1 to determine underflow and overflow.
    s1->topindx=-1;
    s1->arr=(int*)malloc(sizeof(int)*s);
    return s1; 
}

// Returns True if the stack is full
int isFull(stack_int* s1 )
{
    return s1->size==s1->capacity;
}

// returns True if stack is empty
int isEmpty(stack_int* s1)
{
    return s1->size==0;
}

//returns the top element of the stack
int top(stack_int* s1)
{
    if(isEmpty(s1))
    {
        printf("The stack is empty!\n");
        return 1;
    }
    
    return s1->arr[s1->topindx];
}

//function to insert into the stack
void push(stack_int *s1,int n)
{
    if(isFull(s1))
    {
        printf("Stack is full! OVERFLOW!\n");
        return;
    }
    s1->topindx++;
    s1->size++;
    s1->arr[s1->topindx]=n;
}

//function to delete element from stack
void pop(stack_int* s1)
{
    if(isEmpty(s1))
    {
        printf("Stack is already empty! UNDEERFLOW!\n");
        return;
    }

    s1->topindx--;
    s1->size--;
}

// delete the entire stack
void free_stack(stack_int* s1)
{
    free(s1->arr);
    free(s1);
}
