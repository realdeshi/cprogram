#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=j-2;j>0;j--)
           printf("%d",j);
        printf("\n");
    }
}
