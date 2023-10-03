#include<stdio.h>
void main()
{
    int a,b,sum,sub,mult,div;
    printf("Enter two numbers to perform arthematic operations");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    printf("\n%d+%d=%d",a,b,sum);
    printf("\n%d-%d=%d",a,b,sub);
    printf("\n%d*%d=%d",a,b,mult);
    printf("\n%d/%d=%d",a,b,div);
}

