#include<iostream>
using namespace std;
int main()
{
    pair<int,pair<int,int>> p;
    cout<<"enter number"<<endl;
    cin>>p.first;
    cout<<"enter numbers"<<endl;
    cin>>p.second.first>>p.second.second;
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
}
