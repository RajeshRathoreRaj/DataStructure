#include<stdio.h>
#define MAX  5
int front=-1,rear=-1;
void insert(int *queue,int data)
{
	if(rear+1==MAX)
	{
		printf("Queue is full...\n");
	}
	else{ if(front==-1)
	     { front=0; 
      	}
		rear++;
		queue[rear]=data;
	}
}


void display(int *queue)
{int i;
 if(rear==-1 || front>rear)
 { printf("Queue is Empty...\n");
 }
 else{
 	printf("\nElement are:\n");
 	for(i=front;i<rear;i++)
 	{
 		printf("%d,",queue[i]);
	 }
 }
}



void removed(int *queue)
{ int i;
 if(rear==-1 || front>rear)
 { printf("Queue is Empty...\n");
 }
 else{
 
 	printf("\nElement Removed:%d\n",queue[front]);
 		front++;
 	if(front>rear){
 		front=-1;
 		rear=-1;
	 }
 }
}


void main()
{
	int ch,data;
	int queue[MAX];
	do{
		printf("MAIN MENU \n1] INSERT\n2] REMOVE\n3] DISPLAY\n4] EXIT\n");
		printf("Enter Ur Choice:");
	 	scanf("%d",&ch);
		switch(ch)
		{ case 1:
			printf("Enter Data:");
			scanf("%d",&data);
			insert(queue,data);
			break;	
		
		case 2:
			removed(queue);
		    break;
		
		case 3:
		    display(queue);
			break;
	    
	    case 4:
	    	printf("Exit");
	    	break;
			
		default:
			printf("Wrong Option");
			break;
		}
		printf("\n");
		}while(ch!=4);
	}





