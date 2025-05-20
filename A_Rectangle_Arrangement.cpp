
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int h=-1,w=-1;
    while(n--){
        int a,b;
        cin>>a>>b;
        h=max(h,a);
        w=max(w,b);  
    }
    cout<<2*(h+w)<<endl;
    
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
