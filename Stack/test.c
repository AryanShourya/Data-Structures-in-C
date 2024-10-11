#include<stdio.h>
#include"stack.h"

int main()
{
    printf("Demo of header file stack_int.h.\n");
    stack *s1=create_stack('i',5);
    int i=1;
    push_float(s1,4.4);
    while(!isFull(s1))
    {
        push_int(s1,i++);
        printf("Element entered:%d\n",top_int(s1));
    }

    push_int(s1,6);
    
    pop(s1);
    printf("After removing top element, value at the top is:%d",top_int(s1));
    free_stack(s1);
    return 0;
}
