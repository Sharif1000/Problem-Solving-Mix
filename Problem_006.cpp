-- Problem Link: https://codeforces.com/contest/2108/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n, x;
      cin >> n >> x;
      if (n == 1) {
          if (x == 0) cout << -1<<endl;
          else cout << x << endl;
      }
      else{
        int y = __builtin_popcount(x);
        if (y > n) cout << x << endl;
        else{
          int ans = x + (n - y);
          if ((n - y) % 2) {
              if (x == 0 || x == 1) ans += 3;
              else ans++;
          }
          cout << ans << endl;      
        }
      }

    }
    return 0;
}
