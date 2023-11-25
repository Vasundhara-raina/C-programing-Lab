#include<stdio.h>
int fibs(int a)
{ 
  if (a==0) 
    return 0;
  else if(a==1)
    return 1;
  else
    return (fibs(a-1)+fibs(a-2));
}
int main()
{
  int a,i,fib;
  printf("\n enter the fibonacci length:");
  scanf("%d",&a);
  printf("fibonacci series are:");
  for(i=0;i<a;i++)
  {	
    fib=fibs(i);
    printf("%d\t",fib);
  }
  return 0;
}