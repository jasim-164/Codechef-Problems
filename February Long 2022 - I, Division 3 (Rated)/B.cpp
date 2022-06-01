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
lli func(lli n)
{
    double val=(.143*n);
    val=pow(val,n);
    double d= val-floor(val);
    if(d<0.5)
    {
        return floor(val);
    }
    else
    {
        return ceil(val);
    }
}
int main()
{
    int t,n;
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        lli rslt=func(n);
        cout<<rslt<<endl;
    }
    return 0;
}



