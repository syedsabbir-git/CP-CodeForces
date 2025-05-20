#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]]++;
    }

    int ele = n - 2;

    for (int i = 1; i * i <= ele; i++) {
        if (ele % i == 0) {
            int l = ele / i;
            if (m.count(i) && m.count(l)) {
                cout << i << " " << l << '\n';
                return;
            }
        }
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
