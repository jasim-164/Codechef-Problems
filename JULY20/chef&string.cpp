#include<bits/stdc++.h>
using namespace std;
int count_(int m,int n)
{
    for()
}
int main()
{   vector<int>v;
    int t,n;
    cin>>t;
    int val;
    while(t--)
    {
       cin>>n;
       for(int i=0;i<n;i++ )
       {
           cin>>val;
           v.push_back(val);
       }
       for(auto &itr:v)
       {
           cout<<itr<<endl;
       }
       int min_=v[0];
       int max_=v[n-1];
       rslt=count_(min_,max_);
       cout<<v[0]<<" "<<v[n-1]<<endl;
    }
}
