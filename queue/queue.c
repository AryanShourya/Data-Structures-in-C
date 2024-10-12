#include"queue.h"
#include<stdio.h>
#include<stdlib.h>


typedef enum dataflag{
    i,
    f,
    d,
    c 
}dataflag;

typedef struct node{
    void* data;
    struct node* next;
}node;

typedef struct queue{
    dataflag df;
    struct node* front;
    struct node* rear;
}queue;

queue* create_queue(char x)
{
    queue* s1=(queue*)malloc(sizeof(queue));
    s1->front=s1->rear=NULL;
    switch (x){
        case i:
        s1->df=i;
        break;

        case f:
        s1->df=f;
        break;

        case d:
        s1->df=d;
        break;

        case c:
        s1->df=c;
        break;

        default:
        printf("Enter valid data type symbol!\n");
        return NULL;
    }

    return s1;
}

void enqueue_int(queue* s1,int n)
{
    if(s1->df!=0)
    {
        printf("invalid datatype!\n");
        return;
    }
    if(s1->front==NULL && s1->rear==NULL)
    {
        s1->front=(node*)malloc(sizeof(node));
        s1->rear=s1->front;
        (s1->rear->data)=n;              // typecasting not done here check for error
        s1->rear->next=NULL;
        return;
    }

    node* n1=malloc(sizeof(node));
    n1->data=n;
    n1->next=NULL;
    s1->rear->next=n1;
    s1->rear=n1;
    return;
}

