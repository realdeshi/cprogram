#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    if(b==0)
        return a;
    return (GCD(b,a%b));
}
int main()
{
    int a,b,lcd;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    lcd=(a*b)/(GCD(a,b));
    cout<<lcd;
}

