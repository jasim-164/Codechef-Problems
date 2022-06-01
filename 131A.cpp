#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int t=0;
        if(s[0]<=90&&s[n-1]<=90)
        {
            cout<<s<<endl;
            t=1;
        }
         else if(s[0]>=97&&s[n-1]>=97)
        {
            for(int i=0;i<n-1;i++)
          {
            if(i==0)
            s[i]=s[i]-32;
            else
            {
               if(s[i]<=90)
               {
                   s[i]=s[i]+32;
               }
            }
           }
        }
        else if(s[0]>=97&&s[n-1]<=90)
        {
            for(int i=0;i<n;i++)
         {
            if(i==0)
            {
            s[i]=s[i]-32;
            }
            else
            {
               if(s[i]<=90)
               {
                   s[i]=s[i]+32;
               }
            }
         }

        }
           else if(s[0]<=90&&s[n-1]>=97)
        {
            for(int i=0;i<n-1;i++)
            {
            if(i!=0)
            {
                if(s[i]<=90)
                {
                    s[i]=s[i]+32;
                }
            }
            }

        }

    if(t==0)
    {
        cout<<s<<endl;
    }
    return 0;
}
