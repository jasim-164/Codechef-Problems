#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int value(int s,int n)
{int q;
    int p=s/n;
    int r=s%n;
    if(r>=2 && r<n)
    {
        for(int i=2;i<r;i=i+2)
        {
            if(i=r)
            {
                r=r/i;
            }
        }

return r+p+1;
    }
else{
    return r+p;
}
}
int main()
{
    int t,s,n;
    cin>>t;
    while(t--)
    {
        cin>>s>>n;
        int rslt=value(s,n);
        cout<<rslt<<endl;
    }
    return 0;
}
