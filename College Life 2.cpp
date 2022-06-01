#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=100001;
int main()
{
    int t,s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int q[s+1];
        lli introsum=0;
        f(i,s)
        {
            cin>>q[i];
            introsum+=q[i];
        }

        int p;
        int epi[maxn];
        int j=0;
        lli sum=0;
        f(i,s)
        {
         cin>>p;
         f(i,p)
         {
           cin>>epi[i];
           if(i>0)
           {
               sum+=epi[i]-q[j];
           }
           else
           {
               sum+=epi[i];
           }

         }
         j++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
