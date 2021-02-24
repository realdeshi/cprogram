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
bool looplink(node **f)
{
   node *slowptr=*f,*fstptr=*f;
   while(fstptr!=NULL&&fstptr->next!=NULL)
   {
       slowptr=slowptr->next;
       fstptr=fstptr->next->next;
       if(slowptr==fstptr)
        return true;
   }
  return false;
}
void createloop(node **f,node **r)
{
    node *temp=*f;
    int i=0;
    while(i<2)
    {
        temp=temp->next;
        i++;
    }
    (*r)->next=temp;
}
int main()
{
    int n,o;
    node *f=NULL,*r=NULL;
    char ch;
    do{
    cout<<"enter 1 for insert"<<endl;
    cout<<"enter 2 for display"<<endl;
    cout<<"enter 3 for find the loop"<<endl;
    cout<<"enter 4 for create loop"<<endl;
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
                cout<<looplink(&f)<<endl;
            }
            break;
        case 4:
            if(f==NULL)
                cout<<"no element in a linklist"<<endl;
            else
            {
               createloop(&f,&r);
            }
            break;
        default:
            cout<<"invalid input";
        }
         cout<<"for repeat press y"<<endl;
         cin>>ch;
    }while(ch=='y'||ch=='Y');
}



