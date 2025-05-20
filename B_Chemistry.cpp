#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    int n,k;
    cin>>n>>k;
    cin>>s;
    map<char,int> m;
    for(int i = 0;i<n;i++){
        m[s[i]]++;
    }
    int odd= 0;
    for (auto& p : m) {
    if(p.second%2!=0) odd++;
}
if(odd>k+1) cout<<"NO\n";
else cout<<"YES\n";


    
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
