//1/3,1/6,1/9
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter number you want to print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("1/%d  ",i*3);
}
