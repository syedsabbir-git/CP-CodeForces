#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
     int mn = INT_MAX;

    for(int i = 1; i < n; i++) {

      int d = v[i] - v[i-1];

      mn = min(mn, d);

    }

    if(mn < 0) {

      cout << 0 << endl;

    }

    else {

      cout << (mn/2)+1 << endl;

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
