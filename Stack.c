#include<stdio.h>
#include<malloc.h>
typedef struct stack
{
	int data;
	struct stack *next;
}NODE;

NODE *push(NODE*top,int data)
{
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	if(top==NULL)
	{
		temp->next=NULL;
		top=temp;
		}
	else{
		temp->next=top;
		top=temp;
		
	}
	
	return(top);
}

NODE *pop(NODE *top)
{ NODE *temp;
  if(top==NULL)
  {
  	printf("stack is empty...");
  }
  else{
  	temp=top;
  	top=top->next;
  	printf("Data Poped %d\n",temp->data);
  	free(temp);
  }
  return(top);
}

void display(NODE *top)
{
	NODE *t;
	if(top==NULL)
	{printf("Stack is EMPTY\n");
	}
	else{
		t=top;
		while(t)
		{
			printf("%d,",t->data);
			t=t->next;
			
		}
	}
}


void main()

{
	
NODE *top=NULL;
int ch,data;
	do{
		printf("\nMain Menu\n1] Push\n2] display \n3] Pop\n4] Exit\n");
		printf("Enter Ur Choice?");
		scanf("%d",&ch);
		switch(ch)
		{case 1:
			printf("Enter Data:");
			scanf("%d",&data);
			top=push(top,data);
			break;
			
		case 2:
		    display(top);
			break;
			
		case 3:
		    top=pop(top);
			break;
			
		case 4:
			printf("Exit");
			break;
			
		default:
			printf("Wrong Option");
			
			
		}
	}
	while(ch!=4);	
}






