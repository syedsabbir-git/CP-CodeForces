#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0, neg_count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] == -1) neg_count++;
    }

    if (sum >= 0 && neg_count % 2 == 0) {
        cout << "0\n";
        return;
    }

    int ops = 0;

    while (sum < 0) {
        sum += 2;
        ops++;
        neg_count--;
    }
    if (neg_count % 2 == 1) {
        ops++;  
    }

    cout << ops << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
