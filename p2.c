#include<stdio.h>
typedef struct Employee
{
	int id;
	char name[30];
	long salary;	
}TATA;

void main()
{
	TATA E[3];
	int i;
	for(i=0;i<=2;i++)
	{
	
	
	printf("Enter Employee Id:");
	fflush(stdin);
	scanf("%d",&E[i].id); 
	
		
	printf("Enter Employee Name:");
	fflush(stdin);
    gets(E[i].name);
    
    	
	printf("Enter Employee Salary:");
	fflush(stdin);
	scanf("%ld",&E[i].salary);
}
	
	for(i=0;i<=2;i++)
	{
		printf("%d\t\t%s\t\t%ld\n",E[i].id,E[i].name,E[i].salary);
	}
	
	
	
}
