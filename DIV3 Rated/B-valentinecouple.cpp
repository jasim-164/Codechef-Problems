#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int ara[n+1],ara1[n+1];
        long long int m1=-1;
        long long int min_=1e18;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            m1=max(m1,ara[i]);
            min_=min(min_,ara[i]);
        }
        long long int m2=-1,rslt,min_1=1e18;

        for(int i=0;i<n;i++)
        {
            cin>>ara1[i];
            m2=max(m2,ara1[i]);
            min_1=min(min_1,ara1[i]);
        }
        rslt=max(m2+min_,m1+min_1);
        cout<<rslt<<endl;

    }
    return 0;
}
