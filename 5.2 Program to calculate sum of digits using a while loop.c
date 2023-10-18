#include <stdio.h>

int main()
{
    int num,rem,sum=0;
    printf("Enter the number :- ");
    scanf("%d",&num);
    while(num)
    {
        rem = num%10;
        sum = sum + rem;
        num/=10;
    }
    printf("Sum of digits are :- %d ",sum);
    return 0;
}