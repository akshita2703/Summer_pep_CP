#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a;cin>>a;
    int b;cin>>b;
    
    
    int initial_dist = a*10;
    int req_dist = b*10;
    int ans = (100-b);
    float t = ceil(static_cast<double>(req_dist-initial_dist)/(ans));
    cout<<t<<endl;
    
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    solve();
	}

}
