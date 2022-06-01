#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n+1);
        int count=1,t=0;
        for(int i=0;i<n-1;i++)
        {
            //cout<<ara[i]<<" ";
            if(ara[i]==ara[i+1]||ara[i+1]==ara[i]+1)
            {
                    count++;
                    t=1;
            }
            else
            {
                if(t==1)
                count++;
                t=0;
            }
        }
        cout<<count<<endl;


    }
    return 0;
}
