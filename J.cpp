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
const int N = 1005;

int n, m;
int g[N][N];
unordered_map<int, vector<pair<int, int>>> c;

inline ll ms(const vector<pair<int, int>>& v) {
    ll ts = 0;
    int sz = v.size();
    if (sz == 0) return 0;
    // vector<int> xc, yc;
    vector<int> xc(sz), yc(sz);
    for (int i=0; i<sz; i++) {
        xc[i] = v[i].first;
        yc[i] = v[i].second;
    }

    sort(xc.begin(), xc.end());
    sort(yc.begin(), yc.end());

    ll xSum = 0, ySum = 0, ps = 0;
    for (int i=0; i<sz; i++) {
        // xSum += (xc[i+1]*i-ps+1);
        xSum += (xc[i]*i-ps);
        // ps += xc[i+1];
        ps += xc[i];
    }

    ps = 0;
    for (int i=0; i<sz; i++) {
        ySum += (yc[i]*i-ps);
        ps += yc[i];
    }
    ts = xSum+ySum;
    return ts;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> g[i][j];
            c[g[i][j]].emplace_back(i, j);
        }
    }

    ll td = 0;
    for (auto& entry : c) {
        td += ms(entry.second);
    }
    cout << 2*td << endl;
    
    return (EXIT_SUCCESS);
}
