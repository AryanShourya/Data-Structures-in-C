// This file contains function definations of 'stack_int.h' header file
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"stack_int.h"
enum dataflag{
    i,
    f,
    d,
    c 
};
struct stack_int{
    void* arr;
    dataflag df;
    int size;
    int capacity;
    int topindx;
};

stack_int* create_stack(char c,int s)
{
    // use dynamic memory allocation to allocate memory for stack struct.
    stack_int *s1= (stack_int*)malloc(sizeof(stack_int)*1);
    //set capacity to s . 
    s1->capacity=s;
    // set current size of stack to 0.
    s1->size=0;
    // set top index to -1 to determine underflow and overflow.
    s1->topindx=-1;
    switch (c){
        case 'i':
        s1->arr=(int*)malloc(sizeof(int)*s);
        s1->df=i;
        break;
        case 'f':
        s1->arr=(float*)malloc(sizeof(float)*s);
        s1->df=f;
        break;
        case 'd':
        s1->arr=(double*)malloc(sizeof(double)*s);
        s1->df=d;
        break;
        case 'c':
        s1->arr=(char*)malloc(sizeof(char)*s);
        s1->df=c;
        break;
        default:
        printf("Enter valid data type!\n");
        free_stack(s1);
        return NULL;
    }
    
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

//returns the top integer element of the stack
int top_int(stack_int* s1)
{
    if(isEmpty(s1))
    {
        printf("The stack is empty!\n");
        return 1;
    }

    if(s1->df!=0)
    {
        printf("Cannot access non-integer elements!\nuse top_int()");
        exit(0);
    }
    if(s1->df!=0)
    {
        printf("Cannot access top of stack! Wrong function used.\n");
        return 1;
    }
    
    return ((int*)s1->arr)[s1->topindx];
}

// returns top float of the stack
float top_float(stack_int* s1)
{
    if(isEmpty(s1))
    {
        printf("The stack is empty!\n");
        return 1;
    }

    if(s1->df!=1)
    {
        printf("Cannot access top of stack! Wrong function used.\n");
        return 0.0;
    }
    
    return ((float*)s1->arr)[s1->topindx];
}

double top_double(stack_int* s1)
{
    if(isEmpty(s1))
    {
        printf("The stack is empty!\n");
        return 1;
    }

    if(s1->df!=2)
    {
        printf("Cannot access top of stack! Wrong function used.\n");
        return 0.0000;
    }
    
    return ((double*)s1->arr)[s1->topindx];
}

char top_char(stack_int* s1)
{
    if(isEmpty(s1))
    {
        printf("The stack is empty!\n");
        return '\0';
    }

    if(s1->df!=3)
    {
        printf("Cannot access top of stack! Wrong function used.\n");
        return '\0';
    }
    
    return ((char*)s1->arr)[s1->topindx];
}

//function to insert integer into the stack
void push_int(stack_int *s1,int n)
{
    if(s1->df!=0)
    {
        printf("cannot insert different element!\n");
        return;
    }

    if(isFull(s1))
    {
        printf("Stack is full! OVERFLOW!\n");
        return;
    }
    s1->topindx++;
    s1->size++;
    ((int*)s1->arr)[s1->topindx]=n;
}

// function to insert flaot in stack
void push_float(stack_int *s1,float n)
{
    if(s1->df!=1)
    {
        printf("cannot insert different element!\n");
        return;
    }
    if(isFull(s1))
    {
        printf("Stack is full! OVERFLOW!\n");
        return;
    }
    s1->topindx++;
    s1->size++;
    ((float*)s1->arr)[s1->topindx]=n;
}

// push double element into the stack
void push_double(stack_int *s1,double n)
{
    if(s1->df!=2)
    {
        printf("cannot insert different element!\n");
        return;
    }

    if(isFull(s1))
    {
        printf("Stack is full! OVERFLOW!\n");
        return;
    }
    s1->topindx++;
    s1->size++;
    ((double*)s1->arr)[s1->topindx]=n;
}

// push character element into the stack
void push_char(stack_int *s1,char n)
{
    if(s1->df!=3)
    {
        printf("cannot insert different element!\n");
        return;
    }

    if(isFull(s1))
    {
        printf("Stack is full! OVERFLOW!\n");
        return;
    }
    s1->topindx++;
    s1->size++;
    ((char*)s1->arr)[s1->topindx]=n;
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
