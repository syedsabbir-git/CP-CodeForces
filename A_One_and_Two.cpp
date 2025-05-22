/*
What i learn from this problem?
-> 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
     int n;
    cin >> n;
    int two = 0;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
      cin >> nums[i];
      if(nums[i]==2) two++;
    }
    if(two%2 != 0) {
      cout << -1 << endl;
    }
    else {
      int x = two/2, c=0;
      for(int i = 0; i < n; i++) {
        if(nums[i]==2) c++;
        if(x==c) {
          cout << i+1 << endl;
          return;
        }
      }
    }
    
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
