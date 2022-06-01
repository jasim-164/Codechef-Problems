#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,x,y;
    long long a[100][100];
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y;
        int sum=0;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
        {
         if((i+j)%2==0)
         {
             a[i][j]=x;
         }
         else
         {
             a[i][j]=y-x;
         }
         sum+=a[i][j];

         }
     }
     cout<<sum<<endl;
    }
    return 0;
}
