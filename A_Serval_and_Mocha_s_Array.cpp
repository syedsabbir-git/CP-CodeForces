/*
What i learn from this problem?
This is also soo informative problem.
i came to know that gcd of (a,b) < gcd(a,b,c) and so on. 
so here is just check if any 2 number gcd is <=2 or not cause,
if yes i can reorder and add all the sub array and all of them gcd will less then 2 and length will increasing also. 
so ans is yes. else no. 
-> 
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
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(__gcd(v[i],v[j])<=2){
                cout<<"Yes\n";
                return;
            }
        }
        
    }
    cout<<"No\n";
    
    
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
