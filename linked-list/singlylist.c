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

void create_slist(char x)
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

void insert_slist_int(slist* s1,int val,int pos)
{
    if(s1->df!=0)
    {
        printf("Invalid data type!\n");
        return;
    }

    if(s1->head==NULL)
    {
        s1->head= malloc(sizeof(node));
        *(int*)(s1->head->data)= val;
        s1->head->next=NULL;
        return;
    }

    

}