#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter number\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter %d number in an array\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
}
