#include<stdio.h>
int main()
{
int i,temp=0,n;
int arr[50];
printf("Enter size of array-");
scanf("%d",&n);
printf("Please enter numbers:\n ");

for (i = 0; i < n; ++i)
{

    scanf_s("%d", &arr[i]);
}

for (i = 1; i < n; ++i)
{
    if (arr[temp] < arr[i])
    temp=i;
}
printf("Largest element = %d", arr[temp]);
printf("\nIndex = %d",temp);

return 0;
}