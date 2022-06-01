#include<bits/stdc++.h>
using namespace std;
const int max_=10000;
void result(long long int *a,int k,int n)
{
       for(int i=0;i<n;i++)
        {
            if(a[i]%k==0)
            {
               cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;

    return ;
}
int main()
{
   long long int t,n,k,a[max_];

    cin>>t;
    long long int x;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];


        }
        result(a,k,n);
    }
    return 0;
}
