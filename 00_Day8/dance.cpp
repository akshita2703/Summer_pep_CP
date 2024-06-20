#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;

void solve(){
    // ? input
    int n;cin>>n;
    int m;cin>>m;
    vector<vector<int>> dance(m,vector<int>(3));
    for(auto &vec:dance) for(auto &x:vec) cin>>x,x--;

    // * Assignment 
    vector<int> color(n);
    for( auto &vec:dance){
        set<int> to_assign = {1,2,3};
        for(auto &dancer:vec) to_assign.erase(color[dancer]);
        for(auto &dancer:vec){
            if(color[dancer] ) continue;
            color[dancer] = *to_assign.begin();
            to_assign.erase(to_assign.begin());
        }
    }

    for(auto &dancer:color) cout<< dancer<<" ";
    cout<<endl;
}
int  main() {
    solve();
}