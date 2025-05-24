#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll max_len = 1;
    set<ll> divisors;

    // Get all divisors
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.insert(i);
            divisors.insert(n / i);
        }
    }

    // Try to form longest consecutive intervals
    for (ll d : divisors) {
        ll curr = d;
        ll len = 0;
        while (n % curr == 0) {
            len++;
            curr++;
        }
        max_len = max(max_len, len);
    }

    cout << max_len << '\n';
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
