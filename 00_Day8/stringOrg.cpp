#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string t;cin>>t;
    // two pointer solution
    //* lambda func 
    auto diff = [&] (char a, char b){return a^b;}; //* a^a = 0 (same) a^b = 1(diff)
    int ans = 0;
    for(int i = 0; i < n; i++){
        int st = i;
        while(i<n && diff(t[i],s[i])==diff(t[st],s[st]))
            i++;
        if(diff(t[st],s[st]))ans++;
    }
    cout << ans << '\n';
}
signed main() {
    freopen("breedflip.in","r",stdin);
    freopen("breedflip.out","w",stdout);
    solve();
}