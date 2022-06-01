#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,(ara+n));
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]==ara[i+1])
        {
            count++;
            i=i+2;
        }
    }
    int sum=n-(2*count);

    cout<<sum+count<<endl;

    return 0;
}
