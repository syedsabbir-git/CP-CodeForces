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
    int ma = 0,curr=0;
    for (int i = 0; i < n; i++)
    {
     if(a[i]==0){
        curr++;
        ma= max(ma,curr);
     }
     else {
        curr=0;
        }
    }
    cout << ma<<endl;
    
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
