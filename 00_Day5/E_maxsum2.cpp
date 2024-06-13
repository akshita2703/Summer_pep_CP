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
    int n; cin >> n;
    int a; cin >> a;
    int b; cin >> b;
    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    // Prefix sum array
    vector<ll> pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++) pref[i] = pref[i - 1] + v[i];

    ll ans = LLONG_MIN;
    multiset<ll> ms;

    // Initial window of size [a-1 to b-1]
    for(int i = a - 1; i < b; i++){
        ms.insert(pref[i]);
        ans = max(ans, *ms.rbegin());
    }

    // Sliding window
    for(int i = a; i < n; i++){
        ms.erase(ms.find(pref[i - 1]));
        if(i+b-a< n){
            ms.insert(pref[i+b-a]);
        }
        ans = max(ans, *ms.rbegin() - pref[i - a]);
    }

    cout << ans << endl;
}

signed main() {
    original_name;
    solve();
}
