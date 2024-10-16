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
       // printf("head");
        return;
    }

    pos--;
    node* prev=NULL;
    node* ptr=NULL;
    ptr=s1->head;

    while(pos!=0 && ptr!=NULL)
    {
        prev=ptr;
        //printf("%d ",*(int*)prev->data);
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

// function to insert float data type
void insert_slist_float(slist* s1,float val,int pos)
{
    if(s1->df!=1)
    {
        printf("Invalid data type!\n");
        return;
    }

    if(s1->head==NULL)
    {
        s1->head= (node*)malloc(sizeof(node));
        s1->head->data= (float*)malloc(sizeof(float));
        *(float*)(s1->head->data)= val;
        s1->head->next=NULL;
        return;
    }

    if(pos==0)
    {
        node* newNode=malloc(sizeof(node));
        newNode->data=(float*)malloc(sizeof(float));
        *(float*)(newNode->data)= val;
        newNode->next=s1->head;
        s1->head=newNode;
        printf("head");
        return;
    }

    pos--;
    node* ptr=NULL;
    ptr=s1->head;
    node* prev=NULL;
    while(pos!=0 && ptr!=NULL)
    {
        prev=ptr;
       // printf("%f ",prev->data);
        ptr=ptr->next;
        pos--;
    }


    // I have handled the case of inserting at the end 
    if( pos!=0 && ptr==NULL)
    {
        printf("pos not available!\n");
        return;
    }
    else if(ptr==NULL && pos==0){
        node* newNode=malloc(sizeof(node));
        newNode->data=(float*)malloc(sizeof(float)); // it is working fine so anyways
        *(float*)(newNode->data)= val;
        prev->next=newNode;
        newNode->next=NULL;
        return;
    }

    node* newNode=malloc(sizeof(node));
    newNode->data=(float*)malloc(sizeof(float));
    *(float*)(newNode->data)= val;
    newNode->next = ptr->next;
    ptr->next=newNode;
}

// function to insert double data type
void insert_slist_double(slist* s1,double val,int pos)
{
    if(s1->df!=2)
    {
        printf("Invalid data type!\n");
        return;
    }

    if(s1->head==NULL)
    {
        s1->head= (node*)malloc(sizeof(node));
        s1->head->data= (double*)malloc(sizeof(double));
        *(double*)(s1->head->data)= val;
        s1->head->next=NULL;
        return;
    }

    if(pos==0)
    {
        node* newNode=malloc(sizeof(node));
        newNode->data=(double*)malloc(sizeof(double));
        *(double*)(newNode->data)= val;
        newNode->next=s1->head;
        s1->head=newNode;
        printf("head");
        return;
    }

    pos--;
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
    newNode->data=(double*)malloc(sizeof(double));
    *(double*)(newNode->data)= val;
    newNode->next = ptr->next;
    ptr->next=newNode;
}

// function to insert char data type
void insert_slist_char(slist* s1,char val,int pos)
{
    if(s1->df!=3)
    {
        printf("Invalid data type!\n");
        return;
    }

    if(s1->head==NULL)
    {
        s1->head= (node*)malloc(sizeof(node));
        s1->head->data= (char*)malloc(sizeof(char));
        *(char*)(s1->head->data)= val;
        s1->head->next=NULL;
        return;
    }

    if(pos==0)
    {
        node* newNode=malloc(sizeof(node));
        newNode->data=(char*)malloc(sizeof(char));
        *(char*)(newNode->data)= val;
        newNode->next=s1->head;
        s1->head=newNode;
        printf("head");
        return;
    }

    pos--;
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
    newNode->data=(char*)malloc(sizeof(char));
    *(char*)(newNode->data)= val;
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
