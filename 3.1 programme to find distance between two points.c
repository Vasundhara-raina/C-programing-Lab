#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,p,q,sum,sq;
    printf("Enter coordinates of 1st point:-");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates of 2nd point:-");
    scanf("%f%f",&x2,&y2);
    p=(x2-x1)*(x2-x1);
    q=(y2-y1)*(y2-y1);
    sum=p+q;
    sq=sqrt(sum);
    printf("Answer is %.2f",sq);
    return 0;
}