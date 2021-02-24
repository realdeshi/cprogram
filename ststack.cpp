#include<iostream>
using namespace std;

struct stack
{
    int *arr;
    int top;
    int max_size;
};
void push(stack *st,int key)
{
    if(st->top==st->max_size-1)
    {
        cout<<"overflow\n";
        return;
    }
    st->top++;
    st->arr[top]=key;
    return;
}
stack* newstack(int n)
{
    stack *st=new stack();
    st->top=-1;
    st->arr=new int[n];
    return st;
}
void pop(stack *st)
{
    if(st->top==-1)
    {
        cout<<"stack is empty\n";
        return;
    }
    st->top--;
}
int top(stack *st)
{
    if(st->top==-1)
        return INT_MIN;
    return st->arr[st->top];
}
size_t size(stack *st)
{
    return st->top+1;
}
void display(stack *st)
{
    int i=st->top;
    while(i>=0)
    {
        cout<<st->arr[i]<<"->";
        i--;
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    stack *st=newstack(n);
    int ch,key;
    char c;
    do
    {
        cout<<"1.push\n2.pop\n3.top\n4.size\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cin>>key;
            push(st,key);
            break;
        case 2:
            pop(st);
            break;
        case 3:
            key=top(st);
            if(key==INT_MIN)
                cout<<"empty\n";
            else
                cout<<"key is = "<<key<<endl;

            break;
        case 4:
            cout<<size(st)<<endl;
            break;
        }
         cout<<"for repeat press y"<<endl;
         cin>>c;
    }while(c=='y'||c=='Y');
}
