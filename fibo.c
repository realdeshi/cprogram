#include<stdio.h>
int fibo(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return(fibo(n-1)+fibo(n-2));
}
void main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    printf("fibo=%d",fibo(n));
}
