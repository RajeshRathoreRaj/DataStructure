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



void main()
{ NODE *start=NULL;
  start=insert(77,start);
  start=insert(88,start);
  start=insert(45,start);
  start=insert(100,start);
  display(start);	
}
