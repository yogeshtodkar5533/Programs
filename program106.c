//this program is for syntax

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **  PPNODE;

int main()
{
    NODE obj;
	
	PNODE=(PNODE)malloc(sizeof(NODE));
	
	obj.data=11;
	obj.next=NULL;
	
	ptr->data=11;
	ptr->next=NULL;
	
	
	return 0;
}