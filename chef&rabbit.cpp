#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int ara[n+1];
       int max=-1;
       int count=0;
       for(int i=0;i<n;i++)
       {
           cin>>ara[i];
           if(ara[i]>max)
           {
               max=ara[i];
           }
       }
       //cout<<max<<endl;
       int t=1;
       for(int i=0;i<n;i++)
       {
           if(ara[i]!=0)
           {
             if(ara[i]==max)
             {
                 count++;
                 //cout<<count<<endl;
                 break;
             }
             else
             {
                 count++;
                 i=i+ara[i];
             }

           }
           else
           {
               cout<<"-1"<<endl;
               t=0;
               break;
           }
       }
       if(t!=0)
       cout<<count<<endl;
    }

    return 0;
}
