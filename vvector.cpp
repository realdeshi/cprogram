#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    int m,n,key,i,j;
    cout<<"enter rows and column"<<endl;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        vector<int> temp;
        for(j=0;j<n;j++)
        {
            cin>>key;
            temp.push_back(key);
        }
        v.push_back(temp);
    }
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
