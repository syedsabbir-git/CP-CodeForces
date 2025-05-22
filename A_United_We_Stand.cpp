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
            v.push_back(num);
    }
    sort(v.begin(),v.end());
    int m = v[n-1];
    vector<int> c;
    vector<int> d;
    for ( int val : v)
    {
        if(val==m){
            d.push_back(val);
        }
        else
        c.push_back(val);
    }
    if(c.size()==0 || d.size()==0){
        cout<<-1<<endl;
        return;
    }
    cout<<c.size()<<" "<<d.size()<<endl;
    for(int cv: c){
        cout<<cv<<" ";
    }
    cout<<endl;
    for(int dv: d){
        cout<<dv<<" ";
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
