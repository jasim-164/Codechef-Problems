#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="234";
    int ans=1;
    for(int i=0;i<3;i++)
        ans*=(s[i]-'0');
    cout<<ans<<endl;

    return 0;
}
