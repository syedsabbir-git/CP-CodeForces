/*
Here i have to know the math to avoid ajaira loop. if x not in bound return no else yes
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;

    long long mi = (long long) k * (k + 1) / 2;
    long long mx = (long long) k * (2 * n - k + 1) / 2;
    if (x >= mi && x <= mx) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
