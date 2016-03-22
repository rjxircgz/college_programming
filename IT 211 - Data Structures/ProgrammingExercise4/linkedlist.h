#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	char num[10];
	char desc[100];
	struct node *next;
	struct node *next2;
};

void addword(char *x,char *x2);
void display();
void delet(char *sy);
int search(char *sx);
void isEmpty();



#endif