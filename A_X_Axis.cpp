#include <bits/stdc++.h>
using namespace std;
void solve() {
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[2]-v[0]<<endl;
    
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
