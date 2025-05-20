#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int odd=0,even=0;
    for(int i =0; i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) even+=v[i];
        else odd+=v[i];
    }
    if(odd%2==0 && even%2==0) cout<<"YES\n";
    else if(odd%2!=0 && even%2!=0) cout<<"YES\n";
    else cout<<"NO\n";
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
