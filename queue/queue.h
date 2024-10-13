#ifndef QUEUE_H_
#define QUEUE_H_

enum dataflag;
typedef struct node node;
typedef struct queue queue;

queue* create_queue(char );
void enqueue_int(queue* ,int );
void enqueue_float(queue* ,float );
void enqueue_double(queue* ,double );
void enqueue_char(queue* ,char );
void dequeue(queue* );
int front_int(queue* );
float front_float(queue* );
double front_double(queue* );
char front_char(queue* );
int isQueueEmpty(queue* );
//void free_queue(queue* );
void disp_queue(queue* q1);

#endif 