#include<stdio.h>
int main ()
{
    int n,i;
    double number,max=-99999999999.0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;++i){
        printf("Enter number%d:",i+1);
        scanf("%lf",&number);
        if(number>max){
            max=number;
        }
    }
    printf("Maximum number is %.2lf\n",max);
    return 0;
}










