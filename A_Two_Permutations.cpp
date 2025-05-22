#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b+2<=n) cout<<"Yes\n";
    else if(a==b && b==n) cout<<"Yes\n";
    else cout<<"No\n";
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
