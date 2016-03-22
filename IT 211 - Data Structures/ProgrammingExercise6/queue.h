#ifndef QUEUE_H
#define QUEUE_H
struct queue
{
	char x;
	struct queue *next;
};
typedef struct queue Q;


void enqueue(Q **list,char w);
void display(Q *list);
char dequeue(Q **list);
bool isEmpty2(Q *list);
#endif