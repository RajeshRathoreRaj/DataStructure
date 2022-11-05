#include<stdio.h>
typedef struct DoublyLinkList
{ 
	struct DoublyLinkList *prev;
	int data;
	struct DoublyLinkList *next;	
}NODE;

NODE *insert(int data,NODE *start)
{
	NODE *temp,*t;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;	
	}
	else{
		t=start;
		while(t->next!NULL)
		{t=t->next;
		}
		t->next=temp;
		temp->prev=t;
		
		
	}
	
	
	
	
	return(start);	
}


void main()
{
	NODE *start=NULL;
	start=insert(60,start);
	start=insert(80,start);
    start=insert(90,start);	
	start=insert(84,start);
	start=insert(24,start);
	
		
}
