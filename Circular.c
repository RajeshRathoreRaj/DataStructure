#include<stdio.h>
#include<malloc.h>

typedef struct circular
{ int data;
  struct circular *next;	
}NODE;

NODE *insert(NODE *last,int data)
{
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	if(last==NULL)
	{
		temp->next=temp;
		last=temp;
	}
	
	else
	{ temp->next=last->next;
	  last->next=temp;
	  last=temp;		
	}	
	return(last);
}


void display(NODE *last){
	NODE *start=last->next;
	NODE *t=start;
	
	while(start!=t->next)
	{
		printf("%d,",t->data);
		t=t->next;
	}
	printf("%d,",t->data);	
}


NODE *insertfirst(NODE *last,int data)
{
    NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	if(last==NULL)
	{
		temp->next=temp;
		last=temp;
	}
	else{
		temp->next=last->next;
		last->next=temp;
		
	}
	return(last);
	
}



void main()
{
	NODE *last=NULL;
	int ch,data;
	do{
		printf("\nMain Menu\n1] Insert\n2] display \n3]Insert First\n4Exit\n");
		printf("Enter Ur Choice?");
		scanf("%d",&ch);
		switch(ch)
		{case 1:
			printf("Enter Data:");
			scanf("%d",&data);
			last=insert(last,data);
			break;
			
		case 2:
		    display(last);
			break;
			
		case 3:
		   	printf("Enter Data:");
			scanf("%d",&data);
			last=insertfirst(last,data);	
			break;
		}
	}
	while(ch!=4);	
}
