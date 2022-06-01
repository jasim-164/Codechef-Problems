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
    //char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        map<int,int>mp;
        //int max_=-100000;
        f(i,0,n-1)
        {
            cin>>ara[i];
           /* if(abs(ara[i])>max_)
            {

                max_=max(1LL*max_,ara[i]);
            }*/
            mp[ara[i]]++;
        }
        int target=ara[0];
        int cnt=0;
         f(i,0,n-1)
        {
            if(ara[i]==target)
                cnt++;
        }
        if(cnt==n)
        {
            cout<<"0"<<endl;
            continue;
        }
        int max_=*max_element(ara,ara+n);
        cnt=0;
        bool b=true;
        f(i,0,n-1)
        {
            if(ara[i]==max_ and ara[i+1]==0 )
             {
                 cnt++;
                 i++;
                 continue;
             }
            if(ara[i]==max_)
                continue;
            else
            {
                if(ara[i]+ara[i+1]==max_ and i!=n-1)
                {
                  cnt++;
                   i++;
                }
                else
                {
                    b=false;
                    break;
                }
            }
        }
        if(b)
        {
            cout<<cnt<<endl;
        }
        else
        {
         target=ara[0]+ara[1];
         cnt=1;
         bool test=true;
         f(i,2,n-1)
        {
            if(ara[i]==target and ara[i+1]==0 )
             {
                 cnt++;
                 i++;
                 continue;
             }
             if(ara[i]==target )//-1 -1 0 0 0
             {
                 //cnt++;

                 continue;
             }
            if(i==n-1)
                break;
            if(ara[i]+ara[i+1]==target )
            {
                cnt++;
                i++;
            }
            else{
                test=false;
                break;
            }
        }
        if(test)
        {
            int rslt=min(n-1,cnt);
            cout<<rslt<<endl;
        }
        else{
            cout<<n-1<<endl;
        }

        }



    }
    return 0;
}


