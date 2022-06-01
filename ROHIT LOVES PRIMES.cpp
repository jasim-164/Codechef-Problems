#include<bits/stdc++.h>
typedef long long ll;
#define MAX 1000000000
ll m, n;
using namespace std;
int main() {
  bool *primes = new bool[MAX+1];
  for(ll i =m; i<=n; i++) {
    primes[i] = true;
  }
  ll sqr = sqrt(n);
  primes[0] = false;
  primes[1] = false;
  for(ll p=m; p<=sqr; p++){
    if(primes[p]) {
      for(ll i = p*p; i<=n; i+=p) {
        primes[i] = false;
      }
    }
  }
  cout<<"prime numbers done";
  int t;
  cin>>t;
  while(t--){
    cin>>m>>n;
    for(ll i = m; i<=n; i++) {
      if(primes[i]){
        cout<<i<<" ";
      }
    }
  }
  return 0;
}
