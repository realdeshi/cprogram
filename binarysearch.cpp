#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    int key,i,j;
   for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n,i,j,key,l,r,mid;
    cout<<"enter limit\n";
    cin>>n;
    int arr[n];
    cout<<"enter number\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter key\n";
    cin>>key;
    sort(arr,n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    l=0;
    r=n-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==key)
        {
            cout<<"key is found on position\n";
            return 0;
        }
        else if(arr[mid]<key)
            l=mid+1;
        else
            r=mid-1;
    }
    cout<<"key not found";
}
