#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
    cin>>n>>k>>x>>y;
    long long int Y=n+y-x;
    if(Y==n)
    {
        cout<<n<<" "<<Y<<endl;
    }
    else{
        int r=k%4;
        if(r==1)
        {
            cout<<n<<" "<<Y<<endl;
        }
        else if(r==2)
        {
            cout<<Y<<" "<<n<<endl;
        }
            else if(r==3)
        {
            cout<<"0"<<" "<<abs(n-Y)<<endl;
        }
                else if(r==0)
        {
            cout<<abs(n-Y)<<" "<<"0"<<endl;
        }
    }
    }

    return 0;
}
