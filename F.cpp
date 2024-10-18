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

bool f(int year) {
    return (year%400==0 || (year%4==0 && year%100!=0));
}
int dw(int year, int month, int day) {
    if (month < 3) {
        month += 12; year -= 1;
    }
    int k = year%100, j = year/100;
    int h = (day+(13*(month+1))/5+k+k/4+j/4+5*j)%7;
    return (h+5)%7;
}

int rm(int a, int b) {
    return (a+b+6)/7;
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

    int y; cin >> y;
    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (f(y)) {
        arr[1] = 29;
    }
    int tc = 0, startDay = dw(year, 1, 1);

    for (int i = 0; i < 12; ++i) {
        int days = arr[i];
        tc += rm(days, startDay);
        startDay = (startDay + days) % 7;
    }
    cout << tc << endl;
    return 0;
}
