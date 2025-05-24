#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int ans = 0;

    if (n % 2 != 0) {
        n -= k;
        ans = 1;
        k--;
        if (n > 0) {
            ans += ceil(double(n) / k);
        }
    } else {

        ans = ceil(double(n) / (k - 1));
    }

    cout << ans << '\n';
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
