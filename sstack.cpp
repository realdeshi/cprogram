#include<iostream>
#define max 5
using namespace std;
int main()
{
    int n,key,arr[max],top=-1;
    char ch;
    do
    {
     cout<<"enter 1 for push"<<endl;
     cout<<"enter 2 for pop"<<endl;
     cout<<"enter 3 for display"<<endl;
     cin>>n;
     switch(n)
     {
     case 1:
        cout<<"enter number"<<endl;
        cin>>key;
        top++;
        arr[top]=key;
        break;
     case 2:
         if(top==-1)
            cout<<"no element in a stack"<<endl;
         else
         {
             cout<<"pop element="<<arr[top]<<endl;
             top--;
         }
         break;
     case 3:
         if(top==-1)
            cout<<"no element in a stack"<<endl;
            else
            {
                while(top>=0)
                {
                    cout<<arr[top]<<endl;
                    top--;
                }
            }
            break;
     default:
        cout<<"invalid input"<<endl;
     }
     cout<<"for repeat"<<endl;
     cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
