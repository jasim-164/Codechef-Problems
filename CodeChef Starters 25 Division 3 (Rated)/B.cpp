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
    int t;
    //char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
      int n,x;
      cin>>n>>x;
      if(x>n)
      {
          lli rslt=x%(n+1);
          cout<<rslt<<endl;
      }
      else
      {
          cout<<x<<endl;
      }


    }
    return 0;
}


