#ifndef QUEUE_H
#define QUEUE_H
struct queue
{
	int x;
	struct queue *next;
};
typedef struct queue Q;
typedef struct queue Q2;

void enqueue(Q **list,int w);
void display(Q *list);
char dequeue(Q **list);
bool isEmpty2(Q *list);
#endif