#include <bits/stdc++.h>
using namespace std;
vector<long long> rn;
bool check(int x) {
    int nonZeroDigits = 0;
    while (x > 0) {
        if (x % 10 != 0) nonZeroDigits++;
        x /= 10;
    }
    return nonZeroDigits == 1;
}
void pre(){
    for (long long i = 1; i < 999999; i++){
        if(check(i)) rn.push_back(i);
    }
}

void solve(){
    int n,count=0;
    cin>>n;
    for (int i = 0; i < rn.size(); i++)
    {
        if(rn[i]<=n) count++;
    }
    
    cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pre();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
