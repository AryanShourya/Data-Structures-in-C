#ifndef SINGLYLIST_H_
#define SINGLYLIST_H_

// This library contains functions for creating and using a singly linked list.
typedef enum dataflag dataflag;
typedef struct node node;
typedef struct slist slist;

void disp_slist(slist* );
void rdisp_slist(slist* );
slist* create_slist(char );
void insert_slist_int(slist* ,int ,int );   // slist ,value , position
void remove_slist(slist* ,int );            // slist, position
#endif