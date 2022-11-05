#include<stdio.h>
void myfn(int n)
{
	if(n>=1)
	{ printf("Forward:%d\n",n);
	  myfn(n-1);
	}
	  printf("Backward:%d\n",n);
}





void main()
{ 
  myfn(5);
}
