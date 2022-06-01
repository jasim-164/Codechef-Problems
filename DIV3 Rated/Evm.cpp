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
        //cin>>n;
        lli chef[4];
        lli total[4];
        lli chefvote=0;
        f(i,0,2)
        {
            cin>>chef[i];
            chefvote+=chef[i];
        }

        lli tvote=0;
        f(i,0,2)
        {
            cin>>total[i];
            tvote+=total[i];
        }
        lli need=(tvote/2)+1;

        lli dif=INT_MIN;
        int pos=0;
        f(i,0,2)
        {
            lli d=total[i]-chef[i];
            if(dif<d)
            {
                dif=max(dif,d);
                pos=i;
            }
        }
        if(chefvote>=need)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            chefvote-=chef[pos];
            chefvote+=total[pos];
            if(chefvote>=need)
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


