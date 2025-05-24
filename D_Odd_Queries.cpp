#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<ll> a(n + 1), pre(n + 1, 0);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }
 
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        ll tot = pre[n];
        ll lr = pre[r] - pre[l - 1];
        ll ans = tot - lr + (ll)(r - l + 1) * k;
        cout << (ans % 2 == 1 ? "YES\n" : "NO\n");
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