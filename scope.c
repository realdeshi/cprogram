#include<stdio.h>
int a=10;//global variable
int sum(int x)
{
  printf("in sum function=%d\n",x+2);
  printf("in sum function a=%d\n",a);
  return 0;
}
int main()
{
    int a=20;
    sum(a);
    printf("in main function=%d\n",a);
    return 0;
}
