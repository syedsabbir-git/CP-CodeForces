#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
    int in=-1,ans=0;
    for(int i=0;i<n;i++){
      if(arr[i]*(i-in)>=x){
        ans++;
        in = i;
      }
    }
    cout<<ans<<endl;
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