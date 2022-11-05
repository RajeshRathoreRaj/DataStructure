#include<stdio.h>
void myfn(char *s,int i)
{
  if(s[i])
  {
  	myfn(s,i+1);
  }
  printf("%c",s[i]);
}





void main()
{ 
  myfn("PETER",0);
}
