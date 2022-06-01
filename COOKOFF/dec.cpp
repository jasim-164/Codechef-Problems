#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,t;
    cin>>t;
    while(t--)
    {
      cin>>a>>b;
    int test;
    for(int i=a;i<b;i++)
    {
        if((b%i)>(b%(i+1)))
           {
              //max_=b%i;
              test=1;
           }
           else
           {
               test=-1;
               break;
           }
    }
    if(test==1)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    }

    return 0;
}

