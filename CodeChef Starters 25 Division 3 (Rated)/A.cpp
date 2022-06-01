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
    int t,n;
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int cnt=0;
        for(int i=2;i<=x;i+=2)
        {
            y--;
            if(y>=0)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}


