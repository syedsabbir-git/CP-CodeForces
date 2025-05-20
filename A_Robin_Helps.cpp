#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    int gold=0,count=0;
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        if(a>=k) gold+=a;
        else if(a==0 && gold>0) {
            gold--;
            count++;
            };
    }
    cout<<count<<endl;
    
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
