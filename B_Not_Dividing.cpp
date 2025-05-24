#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        a[i]=num+1;
    }
    for (int i = 1; i < n; i++)
    {
        if(a[i]%a[i-1]==0){
            a[i]++;
        }
    }
    for(int v: a){
        cout<<v<<" ";
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
