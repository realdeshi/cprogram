#include<iostream>
using namespace std;
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int Partition(int *arr,int l,int r)
{
    int pivot=arr[r];
    int i=l-1,j=l;
    while(j<=r)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    return i;
}
void quicksort(int *arr,int l,int r)
{
    if(l<r)
    {
        int p=Partition(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}
int main()
{
    int n,i;
    cout<<"enter limit"<<endl;
    cin>>n;
    int arr[n];
     cout<<"enter number in an array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    print(arr,n);
    quicksort(arr,0,n-1);
    print(arr,n);
}
