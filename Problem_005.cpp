-- Problem Link: https://codeforces.com/contest/2106/problem/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
      long long n, k; cin>>n>>k;
      long long a[n], b[n];
      long long mn = INT_MAX, mx = INT_MIN;
      for(long long i = 0; i < n; i++){
        cin>>a[i];
        mn = min(mn,a[i]);
        mx = max(mx, a[i]);
      }
      for(long long i = 0; i < n; i++) cin>>b[i];
      bool flag = true;
      long long temp = 0;
      set<int>s;
      for(long long i = 0; i < n; i++){
        if(b[i] != -1) {
          s.insert(a[i]+b[i]);
        }
      }
      if(s.size() > 1) cout<<0<<endl;
      else if(!s.empty()){
        long long val = *s.begin();
        for(long long i = 0; i < n; i++){
          if((val - a[i]) > k || (val - a[i]) < 0) flag = false;
        }
        if(flag == false){
          cout<<0<<endl;
        }
        else{
          cout<<1<<endl;
        }
      }
      else{
        cout<<(mn+k - mx +1)<<endl;
      }
      
    }
    return 0;
}
