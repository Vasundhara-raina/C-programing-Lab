#include<stdio.h>
void main()
{
    int a[10][10],i,j,m,n;
    printf("Enter row and column for matrix-");
    scanf("%d%d",&m,&n);
    printf("Enter elements-");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);}
        }
        printf("Matrix is -/n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}