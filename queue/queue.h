#ifndef QUEUE_H_
#define QUEUE_H_

enum dataflag;
struct node;
struct queue;

queue* create_queue(char );
void enqueue_int(queue* ,int );
void dequeue(queue* );
int front_int(queue* );
void free_queue(queue* );

#endif 