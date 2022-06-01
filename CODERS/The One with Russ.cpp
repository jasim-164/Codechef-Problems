#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1e18
const lli maxn=1000005;
int main()
{
    int t,n,x,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>k;
        lli ara[n+1],ara1[n+1];
        f(i,0,n-1)
        {
            cin>>ara[i];
        }
          f(i,0,n-1)
        {
            cin>>ara1[i];
        }
        lli cnt=0;
           f(i,0,n-1)
        {
            if(abs(ara[i]-ara1[i])<=k)
                cnt++;
        }
        if(cnt>=x)
            cout<<"yes"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


