#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;

void solve(){
    int n;cin>>n;
    int m ;cin>>m;
    vector<int> deg(n);
    for(int i =0;i<m;i++){
        int u ,v;cin>>u>>v;u--,v--;
        deg[u]++;deg[v]++;
    }
    vector<int> freq(3);
    for(auto &v:deg){
        if(v<=2)freq[v]++;

    }
    int max_deg = *max_element(deg.begin(),deg.end());
    if(freq[2]==n) cout<<"ring topology\n";
    else if(freq[2]==n-2 && freq[1]==2)cout<<"bus topology\n";
    else if(freq[1]==n-1 && max_deg==n-1)cout<<"star topology\n";
    else cout<<"unknown topology\n";

}
int  main() {
    solve();
}