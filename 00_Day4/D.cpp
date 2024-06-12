#include <bits/stdc++.h>
using namespace std;


#define original_name cin.tie(0) -> sync_with_stdio(0)
// void solve(){

//     // reading input
//     int n,m;cin>>n>>m;
//     vector<long long int>v(n);for(auto &x:v)cin>>x;
//     vector<long long int> prefix(n,0);
//     int ans =0;
//     prefix[0] = v[0];
//     for(long long int  i =1;i<n;i++){
//         prefix[i]+=prefix[i-1]+v[i];
//     }
//     map<long long ,int>freq;
//     freq[0]=1;
//     for(int r =0;r<n;r++){
//         ans+=freq[prefix[r]-m];
//         freq[prefix[r]]++;
//     }
    
//     cout<<ans<<endl;

// }


int subarraySum(vector<long long int>& nums, int k) {
        int goal = k;
        unordered_map<int,int> freq;
        int ans =0,prefixSum =0;
        freq[0]=1; 
        for(auto it : nums){
            prefixSum +=it;
            if(freq.find(prefixSum-goal)!=freq.end())
                ans+=freq[prefixSum-goal];
            freq[prefixSum]++;
            
            
        }
        return ans;
        
    }

signed main() {
    original_name;
    int n,m;cin>>n>>m;
    vector<long long int>nums(n);for(auto &x:nums)cin>>x;
    //solve();
    cout<<subarraySum(nums,m);
}



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n, x; cin >> n >> x;
// 	vector<int> a(n);
// 	for (int i = 0; i < n; i++)
// 	    cin >> a[i];

// 	long long pre_sum = 0, answer = 0;
// 	map<long long, int> sum;
// 	sum[0] = 1;
// 	for (int j : a) {
// 		pre_sum += j;
// 		answer += sum[pre_sum - x];
// 		sum[pre_sum]++;
// 	}
// 	cout << answer << endl;
// }




#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    long long pre_sum = 0, ans = 0;
    map<long long, int> freq;
    freq[0] = 1;

    for (int i = 0; i < n; i++) {
        pre_sum += v[i];
        ans += freq[pre_sum - m];
        freq[pre_sum]++;
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}