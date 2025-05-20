#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    for(int i =1;i<=n;i++){
        if(i%2!=0) ans+="1";
        else ans+="0";
    }
    int c =0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=ans[i]) c++;
    }
    cout<<c<<endl;
    
    
    
    
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
