#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
const lli maxn=1000005;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        lli sum=0;
        map<lli,lli>mp;
        f(i,1,n)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        /* f(i,1,n-1)
        {
            sum+=(n-i)*2;
            mp[ara[i]]--;
            sum-=(mp[ara[i]]*2);
        }*/
        for(auto it: mp)
        {
            sum+=(n-it.second)*it.second;
        }
        cout<<sum<<endl;
    }
    return 0;
}


