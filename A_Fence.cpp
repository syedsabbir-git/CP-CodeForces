
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a, b, c;
        cin >> a >> b >> c;
        if (a > b) {
            swap(a, b);
        }
        if (b > c) {
            swap(b, c);
        }
        cout << max(1, c - a - b + 1) << endl;
    
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
