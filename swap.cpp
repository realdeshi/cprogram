#include<iostream>
using namespace std;
void swap(int p,int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    cout<<p<<endl<<q<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
}
