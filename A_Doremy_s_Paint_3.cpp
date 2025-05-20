#include <bits/stdc++.h>
using namespace std;
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
void solve() {
    int n;
    cin>>n;
    map<int ,int> occ;
    for (int i = 1; i <= n; ++i) {
      int x;
      cin >> x;
      occ[x]++;
    }
    if (occ.size() >= 3) cn;
    else{
        long long f1 = occ.begin()->second;
        long long f2 = occ.rbegin()->second;
        if(f1==f2) cy;
        else if(n%2==1 && abs(f1-f2)==1) cy;
        else cn;
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
