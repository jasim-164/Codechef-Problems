#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    int ara[4];
    for(int i=0; i<n; i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(int i=0; i<n-1; i++)
    {
        if(ara[i]==ara[i+1])
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;



    return 0;
}

