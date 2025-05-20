#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<int> a_arr(a);
    vector<int> b_arr(b);
    vector<int> ans(n, 2);
    
    for(int i = 0; i < a; i++) {
        cin >> a_arr[i];
        ans[a_arr[i] - 1] = 1;
    }
  
    // for(int i = 0; i < b; i++) {
    //     cin >> b_arr[i];
    //     if (ans[b_arr[i] - 1] == 2) {
    //         ans[b_arr[i] - 1] = 2;
    //     }
    // }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
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
