#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v;
   int n,key,i;
   cout<<"enter limit"<<endl;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>key;
       v.push_back(key);
   }
   cout<<"size = "<<v.size()<<endl;
   for(i=0;i<n;i++)
    cout<<v[i]<<endl;

   return 0;
}
