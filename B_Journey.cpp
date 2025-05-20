#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int sum = a + b + c;
    int full_cycles = n / sum;
    int rem = n % sum;

    int dayneed = full_cycles * 3;

    if (rem == 0) {
        cout << dayneed << '\n';
    } else if (rem <= a) {
        cout << dayneed + 1 << '\n';
    } else if (rem <= a + b) {
        cout << dayneed + 2 << '\n';
    } else {
        cout << dayneed + 3 << '\n';
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