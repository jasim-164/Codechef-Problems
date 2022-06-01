#include <bits/stdc++.h>
using namespace std;

int solve()
{
   int n;
   cin >> n;
   map<int, int> freq;
   for (int iloop = 0; iloop < 2 * n; iloop++)
   {
      int temp;
      cin >> temp;
      freq[temp]++;
   }
   for (int iloop = 0; iloop < 2*n; iloop++)
   {
       cout<<iloop<<" "<<freq[iloop]<<endl;
      if (freq[iloop] == 0)
      {
         cout << "YES" << endl;
         return 0;
      }
      else if (freq[iloop] == 1)
      {
         cout << "NO" << endl;
         return 0;
      }
   }
   cout << "NO" << endl;

   return 0;
}
int main()
{
   int T = 1;
   cin >> T;
   while (T--)
      solve();
   return 0;
}
