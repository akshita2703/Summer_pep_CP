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

    //Reading input 
    int n,m;cin>>n>>m;
    vector<int>tickets(n);for(auto &x:tickets)cin>>x;
    vector<int>customer(m);for(auto &x:customer)cin>>x;

    //creating multiset 
    multiset<int> ticket_set(tickets.begin(),tickets.end());  // sort order 

    for(auto &c:customer){
        // find his ticket
        // we want first element <=x

        auto it = ticket_set.upper_bound(c);
        if(ticket_set.empty() || it == ticket_set.begin()){
            cout<<-1<<endl;
        }else{
            cout<<*prev(it)<<endl;
            ticket_set.erase(prev(it));
        }
    }


}

signed main() {
    original_name;
    
    solve();
}