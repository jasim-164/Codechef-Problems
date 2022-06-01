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
        cin>>n;
        lli ara[2*n+1];
        int zero=0;
        int one=0;
        map<int,int>mp;
        f(i,0,2*n-1)
        {
            cin>>ara[i];
            mp[ara[i]]++;
            if(ara[i]==0)
                zero++;
            if(ara[i]==1)
                one++;
        }
        if(zero==2*n)
        {
            cout<<"YES"<<endl;
        }
        else if(zero==0)
        {
           cout<<"YES"<<endl;
        }
       else {
            bool b=true;
            int mex=0;
            for(auto itr:mp)
            {
               // cout<<itr.first<<" "<<itr.second<<endl;
                if(itr.first==mex and mex==0)
                {
                    if(zero>=n)
                    {
                        if(one==1)
                        {
                           b=false;
                           break;
                        }
                    }
                }
                else if(itr.first==mex)
                {
                    if(itr.second==1)
                    {
                        b=false;
                        break;
                    }
                }
                else
                {
                    b=true;
                    break;
                }
                mex++;
            }
            if(b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }


        }

    }
    return 0;
}


