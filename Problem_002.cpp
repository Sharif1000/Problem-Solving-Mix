--Problem Link: https://codeforces.com/contest/2103/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      for(int i = 0; i < n; i++) cin>>a[i];
      int cnt = 0;
      sort(a,a+n);
      for(int i = 1; i < n; i++) if(a[i] != a[i-1]) cnt++;
      cout<<cnt+1<<endl;
    }
    return 0;
}
