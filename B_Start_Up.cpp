
#include <bits/stdc++.h>
using namespace std;
bool isPalin(string s){
    int l =0, r= s.size()-1;
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
void solve() {
    set<char> mirr = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    string s;
    cin>>s;
    if(!isPalin(s)){
        cout<<"NO\n";
        return;
    }
    for( auto c : s){
        if(mirr.find(c) == mirr.end()){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();

    return 0;
}
