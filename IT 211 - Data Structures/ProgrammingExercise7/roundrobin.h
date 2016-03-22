#ifndef QUEUE_H
#define QUEUE_H
struct queue
{
	int x;
	struct queue *next;
};
typedef struct queue Q;


void enqueue(Q **list,char w);
void display(Q *list,int z);

#endif