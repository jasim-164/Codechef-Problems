#include<bits/stdc++.h>
using namespace std;
using lli=long long int;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        lli ara[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);// a b c 1.c*(b-a)=bc-ac
                                //2.b*(c-a)=bc-ab
        lli  m=(((ara[n-2]-ara[0])*ara[n-1]),(ara[n-1]-ara[0])*ara[n-2]);
        cout<<m<<endl;
    }
    return 0;
}
