#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    int count=0,sum=0;
    for(int i=0;i<n;i++)
    {
         if(ara[i]<0)
        {
            count++;
            if(k>=count)
            {
                sum+=(-1*ara[i]);
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(ara[i]>=0)
        {
            sum+=ara[i];
        }
        else
        {
           break;
        }
    }
    cout<<sum<<endl;
    return 0;
}
