#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin >> a>>b>>c;
    if(c%2!=0 && a == b) cout<<"First\n";
    else if(a>b) cout<<"First\n";
    else cout<<"Second\n";
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
