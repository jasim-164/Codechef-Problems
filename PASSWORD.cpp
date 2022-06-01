#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c1=0,c2=0,c3=0,c4=0;
    int n=s.size();
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
    int c1=0,c2=0,c3=0,c4=0;
    int n=s.size();
    if(n<10){
                cout<<"NO"<<endl;
                continue;
    }
    else if(s[0]>='0'&&s[0]<='9')
    {
         cout<<"NO"<<endl;
                continue;
    }
      else if(s[n-1]>='0'&&s[n-1]<='9')
    {
         cout<<"NO"<<endl;
               continue;
    }
    /*else if(s[0]>=65&&s[0]<=90)
    {
         cout<<"NO"<<endl;
                return 0;
    }
      else if(s[n-1]>=65&&s[n-1]<=90)
    {
         cout<<"NO"<<endl;
                return 0;
    }*/
    else if(s[0]=='@'||s[0]=='#'||s[0]=='%'||s[0]=='&'||s[0]=='?')
    {
        cout<<"NO"<<endl;
                continue;
    }
    else if(s[n-1]=='@'||s[n-1]=='#'||s[n-1]=='%'||s[n-1]=='&'||s[n-1]=='?')
    {
        cout<<"NO"<<endl;
                continue;
    }
    else{

        for(int i=0;i<n;i++)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                c1=1;
            }
            else if(s[i]>=97&&s[i]<=122)
            {
                c2=1;
            }
            else if(s[i]>='0'&&s[i]<='9')
            {
                c3=1;
            }
            else if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?')
            {
                c4=1;
            }

        }
        if(c1==1&&c2==1&&c3==1&&c4==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
             cout<<"NO"<<endl;
        }
    }
    }

    return 0;
}
