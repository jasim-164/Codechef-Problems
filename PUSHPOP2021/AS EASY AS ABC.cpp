#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int j=n-1;
    int len=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-1])
        {
            len=abs(i-j);
            break;
        }
    }
    cout<<len<<endl;
    return 0;
}
