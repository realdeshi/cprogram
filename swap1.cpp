#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cout<<"enter two number\n";
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<b;
}
