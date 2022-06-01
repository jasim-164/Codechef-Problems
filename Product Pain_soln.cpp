#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define ROF(i,a,b) for (int i = (b)-1; i >= a; i--)
#define R0F(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define PQ priority_queue<int>

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define int long long

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

#ifndef ONLINE_JUDGE
#define imie(x) cerr << #x << " = " << x << '\n';
#else
#define imie(x)
#endif

void setIO() {
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);freopen("Error.txt", "w", stderr);
 freopen("output.txt", "w", stdout);
#endif
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(NULL);
}



void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++) {
        for(int k = i+2; k < n; k++) {
            auto f = [&](int j) {
                return (a[i]-a[j]) * (a[j]-a[k]);
            };
            int it = upper_bound(a.begin()+i, a.begin() + k, (a[i] + a[k]) / 2) - a.begin();
            it = min(it, k-1);
            res += max(f(it), f(it-1));
        }
    }
    cout << res << '\n';
}



int32_t main() {
    setIO();
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        solve();
    }
    return 0;
}
