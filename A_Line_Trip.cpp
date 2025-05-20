#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int max_d = 0;
    for (int i = 0; i < n - 1; i++) {
        max_d = max(max_d, abs(v[i] - v[i + 1]));
    }

    max_d = max(max_d, abs(v[0] - 0));
    max_d = max(max_d, abs(v[n - 1] - x) * 2);

    cout << max_d << '\n';
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
