/*
What i learn from this problem?
This is also soo informative problem.
-> 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        if(i && v.back()>num){
            v.push_back(1);
        }
    v.push_back(num);
    }
    cout<<v.size()<<endl;
    for (int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
    
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
