#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    if (k == 0) {
        cout << (s < rev ? "YES\n" : "NO\n");
    } else {
        bool flag = true;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[0]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
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
