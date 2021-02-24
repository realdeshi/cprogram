#include<stdio.h>
void sum(int a)
{
    static int i=1;//initialize only one
    printf("%d\n",a+i);
    i++;
}
void main()
{
    sum(10);
    sum(10);
    sum(10);
}
