#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        lli ara1[n+1],ara2[m+1],sum1=0,sum2=0,count=0,test=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara1[i];
            sum1+=ara1[i];
        }
         for(int i=0;i<m;i++)
        {
            cin>>ara2[i];
            sum2+=ara2[i];
        }
        if(sum1>sum2)
        {
            cout<<"0"<<endl;
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=0;i++)
            {
                if(ara1[i]<ara2[j])
                   {
                        sum1=sum1-ara1[i];
                        sum2=sum2-ara2[j];
                       swap(ara1[i],ara2[j]);
                       sum1=sum1+ara1[i];
                        sum2=sum2+ara2[j];
                        cout<<sum1<<" "<<sum2<<endl;
                        count++;
                        break;
                   }

            }
             if(sum1>sum2)
                   {
                       cout<<count<<endl;
                       test=1;
                       break;
                   }

            }
            if(test==0)
            {
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
