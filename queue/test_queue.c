#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

int main()
{
    queue* q1=create_queue('i');
    enqueue_int(q1,32);
    for(int i=12;i<=15;i++)
    {
        enqueue_int(q1,i);
    }

    // display the queue
    disp_queue(q1);
    printf("\n");
    // delete from front
    dequeue(q1);

    disp_queue(q1);
    printf("\nFront of the queue is %d",front_int(q1));
    for(int i=0;i<4;i++)
    {
        dequeue(q1);
        printf("\n");
        disp_queue(q1);
    }
    return 0;
}