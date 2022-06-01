#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli t=1;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        //lli ara[n+1];
        vector<lli>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];

        lli mini=*min_element(a.begin(), a.end());
        lli ans=mini*n;
        //sort(ara,ara+n,greater<lli>());
        for(int i=0;i<n;i++)
        {
            if(a[i]>mini)
                ans++;
        }
        cout<<ans<<endl;

    }


    return 0;
}
