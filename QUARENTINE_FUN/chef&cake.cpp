#include<bits/stdc++.h>
using namespace std;
void sajano(int *ara,int n)
{ int sum=0,i=0;
    sum+=100*ara[i]+10*ara[i+1]+1*ara[i+2];
    cout<<sum<<endl;
}
int main()
{
    int t,n,ara[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sajano(ara,n);
    }
}
