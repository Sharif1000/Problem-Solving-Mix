--Problem Link: https://codeforces.com/contest/2096/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        int arr[n];
        string s; cin>>s;
        arr[0] = 0;
        int l = 0, r = 0;
        for(int i = 1; i < n; i++){
          if(s[i-1] == '<') arr[i] = --l;
          else arr[i] = ++r;
        }
        for(int i = 0; i < n; i++) cout<<arr[i] - l + 1<<" ";
        cout<<endl;
     }
    return 0;
}
