#include<stdio.h>
typedef struct Employee
{
	int id;
	char name[30];
	long salary;	
}TATA;

void main()
{
	TATA E1,E2,E3;
	
	printf("Enter Employee Id:");
	fflush(stdin);
	scanf("%d",&E1.id); 
	
		
	printf("Enter Employee Name:");
	fflush(stdin);
    gets(E1.name);
    
    	
	printf("Enter Employee Salary:");
	fflush(stdin);
	scanf("%ld",&E1.salary);
	
	
	
}
