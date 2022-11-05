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


  NODE * deleteFirst(NODE *start)
  { NODE *temp;
    if(start==NULL)
    {printf("Empty List");
	}
	else
	{ temp=start;
	  start=start->next;
	  free(temp);
      printf("Node Deleted Successfully...");
	
	}
  
	return start;
  	
  }



 NODE * deleteLast(NODE *start)
  { NODE *temp,*t;//t for Traversing
    if(start==NULL)
    {printf("Empty List");
	}
	else if(start->next==NULL) // if hv Only one node 
	{
		temp=start;
		start=start->next;
		free(temp);
	    printf("Node Deleted Successfully...");
	}
	
	
	else
	{ t=start;
	  while(t->next!=NULL)
	  { temp=t;
	  	t=t->next;
	  }
	  temp->next=t->next;
	  free(t);
	  printf("Node Deleted Successfully...");
	  
	
	}
  
	return start;
  	
  }
  
  
  
  NODE * deleteByInfo(int item,NODE *start)
  { NODE *temp,*t;//t for Traversing
    if(start==NULL)
    {printf("Empty List");
	}
	else if(start->data==item && start->next==NULL) // if hv Only one node 
	{
		temp=start;
		start=start->next;
		free(temp);
		printf("Node Deleted Successfully...");
	}
	
	
	else
	{ t=start;
	  while(t->next!=NULL)
	  { if(t->data==item)
	  { break;
	  }
	    temp=t;
	  	t=t->next;
	  }if(t->data==item)
	  { temp->next=t->next;
	    free(t);
	    printf("Node Deleted Successfully...");
      }
      else if(t->next==NULL)
      {printf("Item Not Found");
	  }
	  
	}
  
	return start;
  	
  }


  
  
  
  





void main()
{ NODE *start=NULL;
  int ch,data,item;
  do
  {
  printf("Main Menu\n1]Insert\n2]Display\n3]Insert At First\n4]Insert By Info\n5]Delete First\n6]Delete Last\n7]Delete By Info\n8]Exit\n");
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
	    start=deleteFirst(start);
	    break;
	    
	case 6:
		start=deleteLast(start);
		break;
		
	case 7:
		printf("Enter Data To Search:");
  		scanf("%d",&item); 
  		start=deleteByInfo(item,start);
		break;	
		   
   	
    case 8:
   	    printf("Good Bye");
   	    break;
   	    
   	default:
   		printf("Wrong Option");
   		break;
   	}
printf("\n");
}while(ch!=8);
}




