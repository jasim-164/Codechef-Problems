#include<bits/stdc++.h>
using namespace std;
long long int  f(int i,int j,int k,vector<int>v)
{
    return ((v[i]-v[j])*(v[j]-v[k]));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //int ara[n+1];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int k=i+2;k<n;k++)
        {
           int j=upper_bound(v.begin()+i,v.begin()+k,((v[i]+v[k])/2))-v.begin();
           j=min(j,k-1);

           long long int m=max(f(i,j,k,v),f(i,j-1,k,v));
           sum+=m;
        }
    }
    cout<<sum<<endl;
    }




    return 0;
}

