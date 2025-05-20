#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i =0;i<n;i++){
        int a, b;
        cin>>a>>b;
        if(a>=7){
            v.push_back(b);
        }
    }
    if(v.size()<1){
        cout<<-1<<endl;
        return;
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    
    
    
    
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
