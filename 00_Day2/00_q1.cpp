// https://codeforces.com/problemset/problem/22/A
//https://codeforces.com/contest/22/submission/264590487


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;   
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
       s.insert(v[i]);
    }
    if(s.size()>=2){
        
        auto it = s.begin();
        it++;
        cout<<*it<<endl;
            
    }
    else{
        cout << "NO"<< endl;
    }
   

    
}