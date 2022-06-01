#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,d,ara[10000];
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        long long int sum=0,avg=0;
        for(int i=1;i<=n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        avg=sum/k;
        if(avg>d)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<avg<<endl;
        }

    }

    return 0;
}
