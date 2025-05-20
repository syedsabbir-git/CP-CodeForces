#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> A(5);
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> A[i];
        sum += A[i];
    }

    if (sum >= 35) {
        cout << 0 << '\n';
        return;
    }

    int need = 35 - sum;
    vector<int> gains;

    for (int i = 0; i < 5; ++i) {
        gains.push_back(10 - A[i]);
    }

    sort(gains.rbegin(), gains.rend());

    int coins = 0;
    for (int i = 0; i < 5 && need > 0; ++i) {
        need -= gains[i];
        coins += 100;
    }

    cout << coins << '\n';
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
