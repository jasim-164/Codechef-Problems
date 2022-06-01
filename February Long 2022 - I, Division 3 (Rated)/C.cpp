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
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        lli mid=(n+1)/2;
        //n=7 mid=4 0 to 3
        lli cnt=0;
        f(i,0,mid-1)
        {
            if(s[i]!=s[n-i-1])
            {
                cnt++;
            }
        }
        if(k>=cnt)
        {
            if(k==cnt)
            {
                cout<<"YES"<<endl;
            }
            else
            {

                k-=cnt;//here palindrome

                if(k%2==0)//even
                {
                    cout<<"YES"<<endl;
                }
                else if(k%2==1 and n%2==1)//both odd
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }

            }


        }
        else
        {
             cout<<"NO"<<endl;
        }

    }
    return 0;
}


