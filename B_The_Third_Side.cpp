#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    int sum=0;
    for(int i =0;i<n;i++){
        int num;
        cin>>num;
        sum+=num;
    }
    cout<<sum-(n-1)<<endl;
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