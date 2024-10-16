#include<stdio.h>
#include<stdlib.h>
#include"singlylist.h"

enum dataflag{
    i,
    f,
    d,
    c 
};

struct node{
    void* data;
    node* next;
};

struct slist{
    dataflag df;
    node* head;
};

slist* create_slist(char x)
{
    // allocate memory for linked list
    slist* s1=(slist*)malloc(sizeof(slist));
    s1->head=NULL;                         // s1 linked list does not point to any linked list
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

// function to insert integer element into the list
void insert_slist_int(slist* s1,int val,int pos)
{
    if(s1->df!=0)
    {
        printf("Invalid data type!\n");
        return;
    }

    if(s1->head==NULL)
    {
        s1->head= (node*)malloc(sizeof(node));
        s1->head->data= (int*)malloc(sizeof(int));
        *(int*)(s1->head->data)= val;
        s1->head->next=NULL;
        return;
    }

    if(pos==0)
    {
        node* newNode=malloc(sizeof(node));
        newNode->data=(int*)malloc(sizeof(int));
        *(int*)(newNode->data)= val;
        newNode->next=s1->head;
        s1->head=newNode;
        printf("head");
        return;
    }
    node* ptr=NULL;
    ptr=s1->head;

    while(pos!=0 && ptr!=NULL)
    {
        ptr=ptr->next;
        pos--;
    }

    if(ptr==NULL)
    {
        printf("pos not available!\n");
        return;
    }

    node* newNode=malloc(sizeof(node));
    newNode->data=(int*)malloc(sizeof(int));
    *(int*)(newNode->data)= val;
    newNode->next = ptr->next;
    ptr->next=newNode;
}


// function to display list
void disp_slist(slist* s1 )
{
    if(s1->head==NULL)
    {
        printf("NULL\n");
        return;
    }
    node* ptr=NULL;
    ptr = s1->head;

    while(ptr!=NULL)
   { 
    switch (s1->df){
        case 0:
        printf("%d ",*(int*)(ptr->data));
        break;
        case 1:
        printf("%f ",*(float*)(ptr->data));
        break;

        case 2:
        printf("%lf ",*(double*)(ptr->data));
        break;

        case 3:
        printf("%c ",*(char*)(ptr->data));

        default:
        return;
       }

       ptr=ptr->next;
    }
    printf("NULL\n");
}

// delete node
void remove_slist(slist* s1,int pos)
{
    if(s1->head==NULL)
    {
        printf("Linked list is empty!\n");
        return;
    }

    if(pos == 0)
    {
        node* temp=s1->head;
        s1->head=s1->head->next;
        free(temp);
        return;
    }


    node* ptr=s1->head;
    node* prev=NULL;
    while(pos!=0 && ptr!=NULL)
    {
        prev=ptr;
        ptr=ptr->next;
        pos--;
    }

    if(ptr==NULL)
    {
        printf("Out of bound!\n");
        return;
    }

    prev->next=ptr->next;
    free(ptr);

}
