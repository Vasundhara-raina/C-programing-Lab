#include<stdio.h>
void main ()
{
    int a,b;
    printf("Enter any number to check to whether it is odd or even:-");
    scanf("%d",&a);
    b=a%2;
    if (b==0)
    {
        printf("%d is even",a);
    } 
    else { printf("%d is odd",a);}
}