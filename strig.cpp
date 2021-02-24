#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter number of rows"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            cout<<" ";
        for(j=1;j<=i+1;j++)
            cout<<j;
        cout<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=i;j++)
            cout<<" ";
        for(j=1;j<=n-i-1;j++)
            cout<<j;
        cout<<endl;
    }
    return 0;
}
