// https://codeforces.com/problemset/problem/1690/C

#include <bits/stdc++.h>
using namespace std;


#define original_name cin.tie(0) -> sync_with_stdio(0)


void solve(){
    int n;cin>>n;
    vector<long long int>st(n);for(auto &x:st)cin>>x;
    vector<long long int>en(n);for(auto &x:en)cin>>x;
    vector<long long int>ans(n);
    for(int i =0;i<n;i++){
        ans[i] = en[i] - (i==0?st[0]:max(st[i],en[i-1])) ;
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}

signed main() {
    original_name;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
  
}