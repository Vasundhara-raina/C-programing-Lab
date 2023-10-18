#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number :- ");
    scanf("%d", &num);
    int c = 0;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        c=1;
        break;
    }
    if(num==1)printf("1 is neither composite nor prime number\n");
    else if(c==0)printf("%d is a prime number\n",num);
    else printf("%d is a not a prime number\n",num);
    return 0;
}