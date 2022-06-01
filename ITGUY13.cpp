#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[10000];
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        int ini=0,last=0,count=0;
        for(int i=1;i<=n;i++)
        {
            cin>>ara[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(ara[i]==k)
            {
                ini=i;
                ++count;
                break;
            }

        }
        for(int i=ini+1;i<=n;i++)
        {
            if(ara[i]==k)
            {
                last=i;
                ++count;
            }
        }
        if(count>1)
        {
            cout<<ini<<" "<<last<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

