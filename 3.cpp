#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n;
    int ara[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>ara[i];
    }
    long long int max=-1234;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(j%i==0)
            {
                if(max<ara[i]+ara[j])
                   {
                       max=ara[i]+ara[j];
                   }
            }
        }
    }
    cout<<max%1000000007<<endl;
    return 0;
}


