#include<iostream>
using namespace std;
int main()
{
    int a[3],*p,i;
    char *c;
    for(i=0;i<3;i++)
       cin>>a[i];
    p=a;
    c=(char*)a;
    for(i=0;i<3;i++)
        cout<<*(p+i)<<endl;
        /*
        not copy int into char
    for(i=0;i<3;i++)
        cout<<*(c+i);*/
        return 0;
}
