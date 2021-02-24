#include<iostream>
using namespace std;
int main()
{
    pair<int,int> p1;//default value of integer in pair in zero;
    pair<int,string> p2;//default value of string in pair is empty;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<"enter number "<<endl;
    cin>>p1.first;
    cout<<"enter name"<<endl;
    cin>>p2.second;
    cout<<p1.first<<" "<<p2.second<<endl;
    p2=make_pair(2,"ravikesh");
    cout<<p2.first<<" "<<p2.second<<endl;
}
