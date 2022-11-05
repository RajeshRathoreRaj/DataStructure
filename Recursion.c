#include<stdio.h>
void Gwalior()
{
	printf("in gwalior\n");
	Agra();
	printf("again in gwalior\n");
	
}

void Agra()
{
	printf("in agra\n");
	NewDelhi();
	printf("again in agra\n");
	
	
}

void NewDelhi()
{
	printf("in delhi\n");
	Amritsar();
	printf("again in delhi\n");
	
}

void Amritsar()
{ printf("in amrisar\n");
}


void main()
{ Gwalior();
  printf("End of Program\n");
	
}
