#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    bool present = false;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        if(num==k) present = true;
    }
    cout<<(present? "YES\n":"NO\n");
    
    
    
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
