#include<stdio.h>
#define MAX  5
int top=-1;
void push(int *stack,int data)
{
	if(top+1==MAX)
	{
		printf("STACK IS OVERFLOW");
	}
	else{
		top=top+1;
		stack[top]=data;
		
	}
}

void display(int *stack)
{ int i;
	if(top==-1)
	{
		printf("STACK IS EMPTY...");
	}
	else{
		printf("\nSTACK ELEMENT ARE:\n");
		for(i=top;i>=0;i--)
		{ printf("%d,",stack[i]);
		}
	}
}


void pop(int *stack)
{
	if(top==-1){
		printf("EMPTY STACK");
	}
	else{
		printf("VALUE POPED:%d\n",stack[top]);
		top--;
		
}
}


void main()
{
	int ch,data;
	int stack[MAX];
	do{
		printf("MAIN MENU \n1] PUSH\n2] POP\n3] DISPLAY\n4] EXIT\n");
		printf("Enter Ur Choice:");
	 	scanf("%d",&ch);
		switch(ch)
		{ case 1:
			printf("Enter Data:");
			scanf("%d",&data);
			push(stack,data);
			break;	
		
		case 2:
			pop(stack);
		    break;
		
		case 3:
		    display(stack);
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






