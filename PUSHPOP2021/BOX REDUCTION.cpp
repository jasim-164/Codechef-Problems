#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ara[n+1];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];

    //int count=0;
    sort(ara,ara+n);
    max=ara[n-1];
    int test=0;
    for(int i=n-2;i>=0;i--)
    {
        if(2*ara[i]<=max)
        {
            count++;
            max=ara[i];
            test=1;
             break;

        }
    }
    if(test==1)
    cout<<n-count<<endl;
    else
        cout<<n<<endl;

}
