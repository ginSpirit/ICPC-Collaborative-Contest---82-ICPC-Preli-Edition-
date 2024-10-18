#include <bits/stdc++.h>
#define input(v) for (auto &i : v) cin >> i
#define endl "\n"
#define all(x) x.begin(), x.end()
 
typedef long long ll;
typedef long long int int64;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const long long MOD = 1e9 + 7;
using namespace std;

const int MAX_N = 200000;
int a[2*MAX_N];
void solve() {
    int n; cin >> n;
    for (int i=0; i<2*n; i++) {
        cin >> a[i];
    }
    ll ms = 0;
    sort(a, a+2*n);
    for (int i=0; i<n; i++) {
        // ms += abs(a[i]-a[i+1]);
        ms += abs(a[2*n-1-i]-a[i]);
    }
    cout << ms << endl;
}
signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int t; cin >> t;
    while(t--) {
        solve();
    }
    return (EXIT_SUCCESS);
}
