#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,pos,temp;
    cout<<"enter limit of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter number in an array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i++)
    {
        m=arr[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(m>arr[j])
            {
                m=arr[j];
                pos=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
