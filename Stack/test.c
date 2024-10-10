#include<stdio.h>
#include"stack_int.h"

int main()
{
    printf("Demo of header file stack_int.h.\n");
    stack_int *s1=make_stack(5);
    int i=1;
    while(!isFull(s1))
    {
        push(s1,i++);
        printf("Element entered:%d\n",top(s1));
    }

    push(s1,6);
    pop(s1);
    printf("After removing top element, value at the top is:%d",top(s1));
    free_stack(s1);
    return 0;
}
