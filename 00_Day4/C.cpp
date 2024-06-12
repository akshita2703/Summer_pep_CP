#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n; cin >> n;
    vector<long long> sum(n);
    long long ans = INT_MIN, value = 0;
    for (long long i = 0; i < n; ++i) {
        cin >> sum[i];
        value = max(value + sum[i], sum[i]);
        ans = max(ans, value);
    }
    cout << ans << endl;
}
int main() {
    solve();
    return 0;
}