#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0,rslt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
                cnt++;
            else
            {
               rslt=max(rslt,cnt);
               cnt=0;
            }
        }
        if(rslt>=k||cnt>=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


