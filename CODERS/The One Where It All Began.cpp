#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=1+2+3+4+5+6;
        if(n>=sum)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
