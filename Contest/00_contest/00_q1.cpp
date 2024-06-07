#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v){
    int n = v.size();
    int c =0;
    for(int i = 1; i < n-1; i++){
        if(v[i-1]<v[i] && v[i]>v[i+1]){
            c++;
        }
        else if(v[i-1]>v[i] && v[i]<v[i+1]){
            c++;
        }
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<solve(v)<<endl;
}