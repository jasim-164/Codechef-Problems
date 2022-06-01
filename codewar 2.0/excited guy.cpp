#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int main()
{

   lli t,d,k;
   cin>>t;
   while(t--)
   {
       cin>>d>>k;
       if(k-1>d)cout<<"NO"<<endl;
       else if(d%k==0)cout<<"YES"<<endl;
       else
       {
           lli p=d/k+1;
           lli r=d%k;
           if(r<=p)
           {
             cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
       }
   }
    return 0;
}
