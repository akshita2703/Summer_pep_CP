#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>&vec){
    int n = vec.size();
    vector<int>res(n,-1);
    stack<int> st;
    for(int i = 2*n-1;i>=0;i--){
        while(!st.empty() && st.top() <= vec[i]) st.pop();
        st.push(vec[i]);
    }
}
int main(){
    vector<int> vec = {4,5,2,25};
    vector<int> ans = solve(vec);
    for(auto it : ans){
        cout<<it<< " ";
    }
    
}