#include<stdio.h>
void main()
{
    int m,n,i,j,sum=0;
    printf("enter number of rows and column\n");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[m][n]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i){
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}
