#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%3==0){
        cout << "YES" << endl;
        return;
    }
    else if(n%7==0){
        cout<<"YES"<<endl;
        return ;
    }
    
    
    int c=0;
    for(int y =0;y<=n/7;y++){
        if((n-7*y)%3==0){
            c=1;
            cout<<"YES"<<endl;
            return;
        }


    }
    cout<<"NO"<<endl;
    return ; 
    
   
}

int main(){

    int n ;
    cin >> n ;
    while(n--){
        solve();
    }
}