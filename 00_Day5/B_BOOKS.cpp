
// https://codeforces.com/problemset/problem/279/B

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;
using dbl = long double;
//#define int ll

using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using vii = vector<pii>;
using vvii = vector<vii>;
using vll = vector<ll>;

#define ff first
#define ss second
#define pb push_back
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define tc int t; cin >> t; while (t--)
#define original_name cin.tie(0) -> sync_with_stdio(0)




void solve(){
    // read input 
    int n,t;cin>>n>>t;
    vector<int>a(n);for(auto &x:a)cin>>x;
    //prefixsum
    vector<int>prefix(n);prefix[0]=a[0];
    for(int i =1;i<n;i++){
        prefix[i] =prefix[i-1]+a[i];
    }

    //solve 

    int ans =0;
    map<int,int>mp;
    for(int i =n-1;i>=0;i--){
        mp[prefix[i]]=i;
        auto it = mp.upper_bound(t+(i==0?0:prefix[i-1]));
        if(it!=mp.begin()){
            it = prev(it);
            ans=max(ans,it->second-i+1);
        }
    }

    cout<<ans<<endl;
}

signed main() {
    original_name;
    
    solve();
}