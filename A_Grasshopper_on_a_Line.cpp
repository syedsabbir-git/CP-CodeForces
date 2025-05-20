#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,k;
    cin>>x>>k;
    if(x<k) cout<<1<<"\n"<<x<<endl;
    else if(x%k!=0) cout<<1<<"\n"<<x<<endl;
    else cout<<2<<"\n"<<x-1<<" "<<1<<endl;

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
