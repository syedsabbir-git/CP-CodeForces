#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c =0;
    for(int i = 1;i<n-1;i++){
        if(s[i-1]=='.' && s[i]=='.'&& s[i+1]=='.'){
            cout<<2<<endl;
            return;
        }
    }
    for(int i = 0;i<n;i++){
        if(s[i]=='.') c++;
    }
    cout<<c<<endl;
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
