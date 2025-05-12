-- Problem Link: https://codeforces.com/contest/2102/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    for (int i = 0; i < n; i++) cnt += abs(a[i]) < abs(a[0]);

    cout << (cnt <= n / 2 ? "YES" : "NO") << endl;
  }
  return 0;
}
