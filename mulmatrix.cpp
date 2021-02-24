#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,k,m1,n1;
    cout<<"enter rows and colmn number of first matrix\n";
    cin>>m>>n;
    cout<<"enter rows and colmn number of second matrix\n";
    cin>>m1>>n1;
    int a[m][n],b[m1][n1],c[m][n1];
    if(n==m1)
    {
      cout<<"enter the number in first matrix\n";
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
            cin>>a[i][j];
      }
      cout<<"enter the number in second matrix\n";
      for(i=0;i<m1;i++)
      {
          for(j=0;j<n1;j++)
            cin>>b[i][j];
      }
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              c[i][j]=0;
              for(k=0;k<n;k++)
              {
                  c[i][j]+=a[i][k]*b[k][j];
              }
          }
      }
      for(i=0;i<m;i++)
      {
          for(j=0;j<n1;j++)
            cout<<c[i][j];
      }
    }
    else
        cout<<"multiplication is not possible";
}
