#include <stdio.h>
void main()
{
  int i,n,f=1;
  printf("Enter a positive integer");
  scanf("%d",&n);
  if(n>=0)
{
  for(i=n;i>0;i--)
  {
    f=i*f;
  }
}
else{
  printf("Factorial of negative number is not eligible");
}
printf("Factorial is %d",f);
}