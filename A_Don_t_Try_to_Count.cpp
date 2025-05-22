/*
What i learn from this problem?
This is also soo informative problem.
-> s1.find(s2)!=string::npos to check is a string is a substring or not of another string;
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,a;
    cin>>n>>a;
    string s1,s2;
    cin>>s1;
    cin>>s2;

    for(int i=0;i<=5;i++){
        
        if(s1.find(s2)!=string::npos){
            cout<<i<<endl;
            return;
        }
        s1+=s1;
    }
    cout<<-1<<endl;
    
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
