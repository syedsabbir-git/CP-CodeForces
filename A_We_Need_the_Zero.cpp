#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x_or =0;
    for (int i = 0; i < n; i++)
    {
        x_or^=a[i];
    }
    if(n%2!=0) cout<<x_or<<endl;
    else{
        if(x_or==0) cout<<x_or<<endl;
        else cout<<-1<<endl;
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
