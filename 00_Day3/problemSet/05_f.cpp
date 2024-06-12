#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    stack<int> st;
    for(int i =0;i<n;i++){
        if(s[i]=='<' && !st.empty()){
            st.pop();
        }
        else if(s[i]!='<'){
            st.push(s[i]);
        }
    }
    string ans = "";
    while(!st.empty())
    {
        char c = st.top();
        ans = c+ans;
        st.pop();
    }
    cout<<ans<<endl;
}

int main(){
    solve();

}