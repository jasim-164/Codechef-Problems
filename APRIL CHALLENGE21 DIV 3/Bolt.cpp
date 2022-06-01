#include<bits/stdc++.h>
using namespace std;
double round(double var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    double value = (int)(var * 100 + .5);
    return (double)value / 100;
}
int main()
{
    int t;
    cin>>t;
    double fix=9.58;
    while(t--)
    {
        double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        double rslt=(100*1.0)/(k1*k2*k3*v);
        rslt=round(rslt);
        //cout<<rslt<<endl;
        if(rslt<fix)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
