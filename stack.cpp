#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,i,o;
    char ch;
    stack<int> st;
    do
    {
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop"<<endl;
        cout<<"enter 3 for display"<<endl;
        cin>>o;
        switch(o)
        {
        case 1:
            cout<<"enter number "<<endl;
            cin>>n;
            st.push(n);
            break;
        case 2:
            if(st.empty())
                cout<<"no element in a stack"<<endl;
            else
            {
                cout<<"element pop = "<<st.top()<<endl;
            st.pop();
            }
            break;
        case 3:
            if(!st.empty())
                cout<<"top element is ="<<st.top()<<endl;
            else
                cout<<"unfollow"<<endl;
        }
        cout<<"for repeat press y"<<endl;
         cin>>ch;
    }while(ch=='y'||ch=='Y');
}

