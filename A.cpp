#include <bits/stdc++.h>
#define input(v) for(auto &i : v) cin >> i
#define endl "\n"
#define all(x)  x.begin(), x.end()

typedef long long ll;
typedef long long int int64;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const long long MOD = 1e9+7;
using namespace std;

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    string s; cin >> s;
    if (s.find('7') != string::npos) {   // can be solve without string approach N/100==7 || (N/10)%10==7 || N%10==7 print Yes else No
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return (EXIT_SUCCESS);
}
