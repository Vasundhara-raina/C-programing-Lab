#include <stdio.h>
#include <math.h>

int main()
{
    int num,count=0,r,ans=0,temp;
    printf("Enter the number :- ");
    scanf("%d",&num);
    temp = num;
    while(num)
    {
        count++;
        num/=10;
    }
    num =  temp;
    while(num)
    {
        r = num%10;
        ans = ans+pow(r,count);
        num/=10;
    }
    if(ans==temp)printf("%d is a armstrong number\n",temp);
    else printf("%d is not a armstrong number\n",temp);
    
    return 0;
}