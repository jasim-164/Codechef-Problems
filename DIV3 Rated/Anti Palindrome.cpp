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
        string s;
        cin>>s;
        if(n%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sort(s.begin(),s.end());
            int len=n/2;//6=>3
            //cout<<n<<endl;
            bool b=true;
            map<char,int>mp;
            f(i,0,n-1)
            {
                mp[s[i]]++;
            }
           // sort(mp.begin(),mp.end());
            string s1="";
            for(auto itr : mp)
            {
                while(itr.second!=0)
                {
                    s1+=itr.first;
                    itr.second--;
                }
            }
            f(i,0,len-1)  //0 1,2 3 4 5
            {
                if(s1[i]!=s1[n-1-i])
                {
                    //cout<<s[i]<<" "<<s[n-1-i]<<endl;
                    b=true;
                }
                else
                {
                    //cout<<s[i]<<" "<<s[n-1-i]<<endl;
                    b=false;
                    break;
                }

            }
            if(b)
            {
                cout<<"YES"<<endl;
                cout<<s1<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
                cout<<s1<<endl;
            }
        }
    }
    return 0;
}


