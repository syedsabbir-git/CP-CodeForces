#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int n1 = n/10;
    int n2 = n%10;
    cout<<n1+n2<<endl;
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
