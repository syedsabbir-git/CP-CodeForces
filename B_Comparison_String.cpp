#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxx = 0;
    int curr = 0;

    for (int i = 0; i < n; ++i) {
        if (i == 0 || s[i] == s[i - 1]) {
            curr++;
        } else {
            curr = 1;
        }
        maxx = max(maxx, curr);
    }


    cout << maxx + 1 << '\n';
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
