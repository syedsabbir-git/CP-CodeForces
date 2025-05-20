#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> occ(n);
    
    for(int i = 0; i < n; i++) 
        cin >> occ[i];
    
    vector<bool> occupied(n + 1, false); 
    occupied[occ[0]] = true; 
    
    for(int j = 1; j < n; j++) {
        int seat = occ[j];
        if (seat > 1 && occupied[seat - 1] || seat < n && occupied[seat + 1]) {
            occupied[seat] = true; 
        } else {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
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
