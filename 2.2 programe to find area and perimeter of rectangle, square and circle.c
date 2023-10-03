#include<stdio.h>
void main()
{
    int s,l,b,rect,square,peri1,peri2;
    float r,area,peri3;
    printf("Enter length & breadth of rectangle");
    scanf("%d%d",&l,&b);
    rect=l*b; peri1=2*l+2*b;
    printf("\nArea of rect is %d\n perimeter of rectangle is %d",rect,peri1);
    printf("\nEnter side of square");
    scanf("%d",&s);
    square=s*s; peri2=4*s;
    printf("\nArea of sq is %d\n perimeter of square is %d",square,peri2);
    printf("\nEnter radius of circle");
    scanf("%f",&r);
    area=3.14*r*r; peri3=2*3.14*r;
    printf("\nArea of circle is %f\nPerimeter of circle is %f",area,peri3);
}

