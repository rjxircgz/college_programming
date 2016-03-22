#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct St {
	char x;
	struct St *next;
};

typedef struct St Stack;

void displayStack(Stack *head);
void push(Stack **head, char item);
char pop(Stack **head);
bool isEmpty(Stack *head);
char peek(Stack *head);

#endif