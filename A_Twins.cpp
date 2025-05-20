
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int total_sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total_sum+=v[i];
    }
    int count = 0,my_sum=0;
    sort(v.begin(), v.end());
    for(int i = n-1;i>=0;i--){
        my_sum+=v[i];
        total_sum-=v[i];
        count++;
        if(my_sum>total_sum) break;
    }
    cout<<count <<endl;  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();

    return 0;
}
