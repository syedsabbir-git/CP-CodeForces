//This isnt done yet, i misunderstood the probelme statement first. i must be more carefull during the reading description next time.
//I started to hate myself, i cant do it, but i must.
// Okay lets take a break now for a moment, weather at outside is soooooo nice, its about to start a rain, lets have a look there and then i will start.

#include <bits/stdc++.h>
using namespace std;
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve() {
  int n;
  cin>>n;
  vector<int> v(n);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
    sum+=v[i];
  }
  if((n%2==0)&&(sum%2==0)) cy;
  else cn;
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
