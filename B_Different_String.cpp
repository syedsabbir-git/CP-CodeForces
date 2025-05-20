#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    bool same = true;
    set<char> uni(s.begin(), s.end());
    if (uni.size() == 1) {
        cout << "NO\n";
        return;
    }
    string r = s;
    sort(r.rbegin(), r.rend());
    if (r != s) {
        cout << "YES\n";
        cout << r << endl;
    } else {
        cout << "NO\n";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
