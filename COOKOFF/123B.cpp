#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len;
    string s;
    cin>>t;
    while(t--)
    {
    cin>>len;
    cin>>s;
    //int len=s.size();
    bool t=false;
    for(int i=0;i<len-1;i++)
    {
        if(s[i]==s[len-1])
        {
            t=true;
            break;
        }
    }
    if(t==true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}

