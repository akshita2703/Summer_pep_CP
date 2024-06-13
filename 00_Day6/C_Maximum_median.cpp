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


#define int ll
#define ff first
#define ss second
#define pb push_back
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define tc int t; cin >> t; while (t--)
#define original_name cin.tie(0) -> sync_with_stdio(0)


void solve(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> v(n);
    for(auto &x:v)cin>>x;

    sort(v.begin(),v.end());

    int l =0,r=2e9+100;
    int ans =-1;
    while (l<=r)
    {
       auto ok = [&](int m){
        int req = 0;
        for(int i = n/2;i<n;i++){
            req += max(0LL,m-v[i]);
        }
        return req<=k;
       };


       int mid = l + (r-l)/2;

        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }

    }

    
    cout<<ans<<endl;
}

signed main() {
    original_name;

    solve();
}