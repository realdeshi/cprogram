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
    int i,n;
    cout<<"enter limit"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter number ina an array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
       cout<<GCD(arr[i],b);
    }
}
