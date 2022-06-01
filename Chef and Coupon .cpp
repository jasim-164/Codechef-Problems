#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int main()
{
    int d,c;
    int a[3],b[3];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>d>>c;
        int suma=0;
        f(i,3)
        {
            cin>>a[i];
            suma+=a[i];
        }

        int sumb=0;
          f(i,3)
        {
            cin>>b[i];
            sumb+=b[i];
        }
        if(suma>=150&&sumb>=150)
        {
            int cuopon;
            int sum=suma+sumb+c;
            int sum1=suma+sumb+2*d;
            if(sum<sum1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(suma<150&&sumb<150)
        {
            /*int cuopon;
            int sum=suma+sumb+c;
            int sum1=suma+sumb+2*d;
            if(sum<sum1)
                cout<<"YES"<<endl;
            else*/
                cout<<"NO"<<endl;
        }
        else if(suma>=150&&sumb<150)
        {
              int cuopon;
            int sum=suma+sumb+c+d;
            int sum1=suma+sumb+2*d;
            if(sum<sum1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(suma<150&&sumb>=150)
        {
              int cuopon;
            int sum=suma+sumb+c+d;
            int sum1=suma+sumb+2*d;
            if(sum<sum1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

return 0;
}
