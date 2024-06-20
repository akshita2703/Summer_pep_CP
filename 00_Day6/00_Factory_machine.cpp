#include<bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;


int main(){
    int n,m;cin>>n>>m;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    ll low =0;
    ll high = 1e18;
    ll ans = 1e18;
    while(low<=high){
        ll mid = (low+high)/2;
        ll products =0;
        for(int i = 0;i<n;i++){
            products+=min(mid/v[i],(ll)1e9);
        }
        if(products>=m){
            if(mid<ans){
                ans = mid;
            }
            high = mid-1;
        }
    }
    cout<<ans<<endl;
}