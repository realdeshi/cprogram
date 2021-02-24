#include<stdio.h>
int a=10;//global variable
const float p=3.14;
int sum(int x)
{
  printf("in sum function=%d\n",x+2);
  printf("in sum function a=%d\n",a);
  printf("p=%.2f\n",p);
  return 0;
}
int main()
{
    int a=20;//local variable
    sum(a);
    printf("in main function=%d\n",a);
    return 0;
}
