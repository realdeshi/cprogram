#include<iostream>
using namespace std;
int main()
{
    int i,j,n,key,k=0;
    cout<<"enter limit of an array\n";
    cin>>n;
    int arr[n];
    cout<<"enter number in an array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter key for search"<<endl;
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        k++;
    }
    if(k==0)
        cout<<"key not found";
    else
        cout<<"key found";
}
