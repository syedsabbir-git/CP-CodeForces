/*
What i learn from this problem?
-> This is a very good problem. I learn a lot of thing from this.
First is the meaning of parity means any 2 number i and i+1 id both even or odd.
if((v[i]%2)==v[i+1]%2) and this line check if the 2 number have the same parity or not.
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int op=0;

    for (int i = 0; i < n-1; i++)
    {
        if((v[i]%2)==v[i+1]%2)
        op++;
    }
    
    cout<<op<<endl;
    
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
