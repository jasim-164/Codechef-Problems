#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	    long long k;cin>>k;
	    vector<long long>v;
	    for(auto i=0;s[i];i++)
	    v.push_back(s[i]-'0');
	    while(k--)
	    {
	        sort(v.begin(),v.end());
	        if(v[0]==9)continue;
	        else
	        v[0]++;
	    }
	    long long ans=1;
	    for(auto x:v)
	    ans*=x;
	    cout<<ans<<"\n";
	    v.clear();
	}
	return 0;
}
