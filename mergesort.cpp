#include<iostream>
using namespace std;
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void merges(int *arr,int l,int m,int r)
{
    int n1=m-l-1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        R[i]=arr[i+m+1];
    int i=0,j=0,k=1;
    while(i<n1&&j<n2)
    {
        if(L[i]<R[j])
            arr[k++]=L[i++];
        else
            arr[k++]=R[j++];
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }
}
void mergesort(int *arr,int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merges(arr,l,m,r);
    }
    else
        return;
}
int main()
{
    int n;
    cout<<"enter number\n";
    cin>>n;
    int arr[n];
    cout<<"enter number in an array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    print(arr,n);
    mergesort(arr,0,n-1);
    print(arr,n);
}
