#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,o;
    node *p=NULL,*f=NULL,*r=NULL,*temp=NULL;
    char ch;
    do{
    cout<<"enter 1 for insert"<<endl;
    cout<<"enter 2 for delete"<<endl;
    cout<<"enter 3 for display"<<endl;
    cin>>o;
    switch(o)
        {
        case 1:
            p=(node*)(malloc(sizeof(node)));
            cout<<"enter number"<<endl;
            cin>>n;
            p->data=n;
            p->next=NULL;
            if(f==NULL)
            {
              f=p;
              r=p;
            }
            else
            {
              r->next=p;
              r=p;
            }
            break;
        case 2:
            if(f==NULL)
                cout<<"no element in a linklist"<<endl;
            else
            {
            temp=f;
            cout<<"delete element is = "<<f->data<<endl;
            f=f->next;
            free(temp);
            }
            break;
        case 3:
            if(f==NULL)
                cout<<"no element in a linklist"<<endl;
            else
            {
              temp=f;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->next;
            }
            }
            break;
        }
         cout<<"for repeat press y"<<endl;
         cin>>ch;
    }while(ch=='y'||ch=='Y');
}
