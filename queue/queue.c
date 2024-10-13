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
        case 'i':
        s1->df=i;
        break;

        case 'f':
        s1->df=f;
        break;

        case 'd':
        s1->df=d;
        break;

        case 'c':
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
   
    node* n1=malloc(sizeof(node));   // allocate memory for node
    n1->data=malloc(sizeof(int));      // allocate memory for data pointer to store n
    *(int*)(n1->data)=n;                //copy n into data
    n1->next=NULL;

    if(s1->front==NULL && s1->rear==NULL)
    {
        s1->front=n1;
        s1->rear=n1;
    }

    s1->rear->next=n1;
    s1->rear=n1;

}

void enqueue_float(queue* s1,float n)
{
    if(s1->df!=1)
    {
        printf("invalid datatype!\n");
        return;
    }
   
    node* n1=malloc(sizeof(node));   // allocate memory for node
    n1->data=malloc(sizeof(float));      // allocate memory for data pointer to store n
    *(float*)(n1->data)=n;                //copy n into data
    n1->next=NULL;

    if(s1->front==NULL && s1->rear==NULL)
    {
        s1->front=n1;
        s1->rear=n1;
    }

    s1->rear->next=n1;
    s1->rear=n1;

}

// insert element into a double data type queue
void enqueue_double(queue* s1,double n)
{
    if(s1->df!=2)
    {
        printf("invalid datatype!\n");
        return;
    }
   
    node* n1=malloc(sizeof(node));   // allocate memory for node
    n1->data=malloc(sizeof(double));      // allocate memory for data pointer to store n
    *(double*)(n1->data)=n;                //copy n into data
    n1->next=NULL;

    if(s1->front==NULL && s1->rear==NULL)
    {
        s1->front=n1;
        s1->rear=n1;
    }

    s1->rear->next=n1;
    s1->rear=n1;

}

// insert data into a character data type queue
void enqueue_char(queue* s1,char n)
{
    if(s1->df!=3)
    {
        printf("invalid datatype!\n");
        return;
    }
   
    node* n1=malloc(sizeof(node));   // allocate memory for node
    n1->data=malloc(sizeof(char));      // allocate memory for data pointer to store n
    *(char*)(n1->data)=n;                //copy n into data
    n1->next=NULL;

    if(s1->front==NULL && s1->rear==NULL)
    {
        s1->front=n1;
        s1->rear=n1;
    }

    s1->rear->next=n1;
    s1->rear=n1;

}

int isQueueEmpty(queue* q1)
{
    return q1->front==NULL && q1->rear==NULL;
}

void dequeue(queue* q1)
{
    if(isQueueEmpty(q1))
    {
        printf("The queue is empty!UNDERFLOW\n");
        return;
    }

    if(q1->front==q1->rear)
    {
        free(q1->front);
        free(q1->rear);
        q1->front=NULL;
        q1->rear=NULL;
        return;
    }

    node* temp=NULL;
    temp=q1->front;
    q1->front=q1->front->next;
    free(temp);
}

void disp_queue(queue* q1)
{
    if(isQueueEmpty(q1))
    {
        printf("Empty queue!\n");
        return;
    }

    node* q=NULL;
    q=q1->front;

    while(q!=NULL)
    {
       switch (q1->df){
        case 0:
        printf("%d ",*(int*)(q->data));
        q=q->next;
        break;
        case 1:
        printf("%f ",*(float*)(q->data));
        q=q->next;
        break;

        case 2:
        printf("%lf ",*(double*)(q->data));
        q=q->next;
        break;

        case 3:
        printf("%c ",*(char*)(q->data));
        q=q->next;

        default:
        return;
       }
    }
    
}

// function to return the front element of the queue
int front_int(queue* q1)
{
    if(q1->df!=0)
    {
        printf("Data type invalid!\n");
        return -1;
    }

    if(isQueueEmpty(q1))
    {
        printf("Queue is empty!\n");
        return -1;
    }

    return *(int*)(q1->front->data);
}

// float datatype
float front_float(queue* q1)
{
    if(q1->df!=1)
    {
        printf("Data type invalid!\n");
        return -1.0;
    }

    if(isQueueEmpty(q1))
    {
        printf("Queue is empty!\n");
        return -1.0;
    }

    return *(float*)(q1->front->data);
}

// double datatype
double front_double(queue* q1)
{
    if(q1->df!=2)
    {
        printf("Data type invalid!\n");
        return -1.0;
    }

    if(isQueueEmpty(q1))
    {
        printf("Queue is empty!\n");
        return -1.0;
    }

    return *(double*)(q1->front->data);
}

// character datatype
char front_char(queue* q1)
{
    if(q1->df!=3)
    {
        printf("Data type invalid!\n");
        return '\0';
    }

    if(isQueueEmpty(q1))
    {
        printf("Queue is empty!\n");
        return '\0';
    }

    return *(char*)(q1->front->data);
}
