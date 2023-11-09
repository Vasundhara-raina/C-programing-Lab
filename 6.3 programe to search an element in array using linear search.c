#include<stdio.h>
int main()
{
    int arr[1000];
    int limit;
    printf("Enter the limit of array:-");
    scanf("%d",&limit);
    for(int i=0;i<limit;i++)
    {
        printf("Enter the elements:-");
        scanf("%d",&arr[i]);
    }
    int elementsearch,found=0;
    printf("Enter the element to search:-");
    scanf("%d",&elementsearch);
    for (int i=0;i<10;i++)
    {
        if(arr[i]==elementsearch)
        {
            printf("Number found at the index %d",i);
            found=1;
            break;
        } 
    }
    if(found==0)
    printf("\nElement not found");
    else
    printf("\nElement founded");
    return 0;
}