#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;


// 4
// 10 30 40 20
//output
//30
void solve(){

// input reading 
    int n; cin>>n;
    vector<int> h(n);for(auto &x:h) cin>>x;

/**
 * *dp[i] -> represents the minimum cost it takes , to reach the i^th stone from the nth stone .
 * *To reach the ith stone ,I must have jumped either from the (i-1)th stone, or the (i-2)th stone 
 * *so, if we compute dp in order from o to n notice that when computing dp[i], dp[i-1]& dp[i-2] have already been computed
 * *therefore , it has optimal substructure 
 * *Because , if I know the value of of dp[i-1] & dp[i-2] I can optimally compute dp[i].
 */
    //*pull dp 
    // *vector<int> dp(n);
    // *dp[0]=0;
    // *dp[1]= abs(h[1]-h[0]);

    // *for(int i = 2;i<n;i++){
    //  *   dp[i]  = min((dp[i-2]+abs(h[i]-h[i-2])),
    //   *              (dp[i-1]+abs(h[i]-h[i-1])));
    // *}

    // *cout<< dp[n-1]<<" ";


// ? Push DP
    // * tell me the minimum cost to reach ith stone

    vector<int> dp(n,INT_MAX);
    dp[0]=0;
    for(int i =0;i<n;i++){
        if(i+1<n){
            dp[i+1] = min(dp[i+1],dp[i]+abs(h[i+1]-h[i]));
        }
        if(i+2<n){
            dp[i+2] =  min(dp[i+2],dp[i]+abs(h[i+2]-h[i]));
        }
    }
    cout<< dp[n-1]<<" ";


}
int  main() {
    solve();
}