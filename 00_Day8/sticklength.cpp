#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;
#define int ll

void solve(){

    // input 
    int n;cin>>n;
    vector<int> stick(n);for(auto &x:stick) cin>>x;
    
    // sort 
    sort(stick.begin(),stick.end());

    // now find the median

    int mid = stick[n/2];
    int ans = 0;
    for(auto it : stick){
        ans+= abs(it - mid);

    }
    cout<<ans<<endl;
}
 signed main() {
    solve();
}