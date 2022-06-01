#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double y;
    cin>>x>>y;
    if(x%5==0)
    {
        double rslt=x+0.5;
        if(rslt>y)
        {
            cout<<y<<endl;
        }
        else
        {
            double p=y-rslt;
            cout<<p<<endl;
        }
    }
    else
    {
        cout<<y<<endl;
    }


    return 0;
}
