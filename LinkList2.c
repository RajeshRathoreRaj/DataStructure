#include<stdio.h>
#include<malloc.h>

typedef struct linklist
{ int data;
  struct linklist *next;	
}NODE;

 NODE* insert(int data,NODE *start)
  {
  	NODE *temp,*t;
  	temp=(NODE*)malloc(sizeof(NODE));
  	temp->data=data;
  	temp->next=NULL;
  	if(start==NULL)
  	{start=temp;
	  }
	else
	{ t=start;
	  while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
           	}
	  return(start);
  }
  
  
  void display(NODE*start)
  { NODE *t;
    if(start==NULL)
    {
      printf("EMPTY LIST");	
	}
	else
	{
		t=start;
		while(t!=NULL)
		{ printf("%d,",t->data);
		  t=t->next;
  		  }
	}
  	
  }
  NODE * insertFirst(int data,NODE *start)
  { NODE *temp;
    temp=(NODE*)malloc(sizeof(NODE));
    temp->data=data;
    temp->next=start;
    start=temp;
	return start;
  	
  }

NODE * insertAfter(int item,int data,NODE *start)
{
	NODE *temp,*t;
    temp=(NODE*)malloc(sizeof(NODE));
    temp->data=data;
    if(start==NULL)
    {
    	printf("List is Empty");
	}
	else
	{ t=start;
	  while(t!=NULL)
	  {if(t->data==item)
	  {
	  	break;
	  }
	  t=t->next;
	  }
	  if(t==NULL)
	  {
	  	printf("Data Not Found...");
	  }
	  else
	  {
	  	
	  temp->next=t->next;
	  t->next=temp;
	
	  }
	}
	return start;
}

void main()
{ NODE *start=NULL;
  int ch,data,item;
  do
  {
  printf("Main Menu\n1]Insert\n2]Display\n3]Insert At First\n4]Insert By Info\n5]Exit\n");
  printf("Enter Your Choice?");
  scanf("%d",&ch);
  switch(ch)
  {
  	case 1:
  		printf("Enter Data:");
  		scanf("%d",&data); 
        start=insert(data,start);
        break;
    case 2:	
        display(start);
   	    break;

    case 3:
    	printf("Enter Data To Insert At First:");
  		scanf("%d",&data); 
        start=insertFirst(data,start);
   	    break;
   	    
   	case 4:
   		
   		printf("Enter Data To Search:");
  		scanf("%d",&item); 
   		
    	printf("Enter Data To Insert:");
  		scanf("%d",&data); 
        start=insertAfter(item,data,start);
   	    break;    
   	
    case 5:
   	    printf("Good Bye");
   	    break;
   	    
   	default:
   		printf("Wrong Option");
   		break;
   	}
printf("\n");
}while(ch!=5);
}




