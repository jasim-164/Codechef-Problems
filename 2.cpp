#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n;
    //int ara[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>k;
        long long int m=(2*k)%1000000007;
        cout<<m<<endl;
    }
    return 0;
}

