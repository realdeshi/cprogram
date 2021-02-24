#include<iostream>
#include<stack>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void insert(node **f,node **r)
{
    node *p=NULL;
    int n;
    p=(node*)(malloc(sizeof(node)));
            cout<<"enter number"<<endl;
            cin>>n;
            p->data=n;
            p->next=NULL;
            if(*f==NULL)
            {
              *f=p;
              *r=p;
            }
            else
            {
              (*r)->next=p;
              *r=p;
            }
}
void display(node **f)
{
    node *temp=NULL;
    temp=*f;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void reverselink(node **f)
{
    node *pre=NULL,*curr=*f,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    *f=pre;
}
int main()
{
    int n,o;
    node *f=NULL,*r=NULL;
    char ch;
    do{
    cout<<"enter 1 for insert"<<endl;
    cout<<"enter 2 for display"<<endl;
    cout<<"enter 3 for reverse the linklist"<<endl;
    cin>>o;
    switch(o)
        {
        case 1:
            insert(&f,&r);

            break;
        case 2:
            if(f==NULL)
                cout<<"no element in a linklist"<<endl;
            else
            {
                display(&f);
            }
            break;
        case 3:
            if(f==NULL)
                cout<<"no element in a linklist"<<endl;
            else
            {
                reverselink(&f);
            }
            break;
        default:
            cout<<"invalid input";
        }
         cout<<"for repeat press y"<<endl;
         cin>>ch;
    }while(ch=='y'||ch=='Y');
}


