// // A-Breed counting

// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;
// using ll = long long;
// using dbl = long double;
// //#define int ll

// using vi = vector<int>;
// using vvi = vector<vi>;
// using pii = pair<int, int>;
// using vii = vector<pii>;
// using vvii = vector<vii>;
// using vll = vector<ll>;

// #define ff first
// #define ss second
// #define pb push_back
// #define rep(i, a, b) for(int i = a; i < (b); ++i)
// #define all(x) begin(x), end(x)
// #define sz(x) (int)(x).size()
// #define tc int t; cin >> t; while (t--)
// #define original_name cin.tie(0) -> sync_with_stdio(0)

// void solve(){
//     int n;
//     cin >> n;
//     int q;
//     cin>>q;
//     vector<int> v(n);
//     rep(i,0,n-1){
//         cin>>v[i];
//     }
//     vector<vector<int>> vec(n,vector<int>(3,0));

//     for(int i =0;i<n;i++){
//         if(v[i]==1){
//             vec[i][0]++;
//         }
//         else if(v[i]==2){
//             vec[i][1]++;
//         }
//         else{
//             vec[i][1]++;
//         }
//     }

//     while(q--){
//         int l;
//         cin>>l;
//         int r;
//         cin>>r;

        
//         int k = 0;
//         while(k<3){
//             if(l==1){
//                 cout<<vec[r-1][k]<<" ";
//             }
//             cout<<vec[r][k] - vec[l-1][k]<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
// }

// signed main() {
//     original_name;
    
//     solve();
// }


#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;

using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using vii = vector<pii>;
using vvii = vector<vii>;
using vll = vector<ll>;

#define ff first
#define ss second
#define pb push_back
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define tc int t; cin >> t; while (t--)
#define original_name cin.tie(0) -> sync_with_stdio(0)

void solve(ifstream &infile, ofstream &outfile){
    int n;
    infile >> n;
    int q;
    infile >> q;
    vector<int> v(n);
    rep(i, 0, n) {
        infile >> v[i];
    }
    
    vector<vector<int>> vec(n + 1, vector<int>(3, 0));

    // Preprocess to fill `vec` with prefix sums
    rep(i, 0, n) {
        vec[i + 1][0] = vec[i][0];
        vec[i + 1][1] = vec[i][1];
        vec[i + 1][2] = vec[i][2];

        if(v[i] == 1) {
            vec[i + 1][0]++;
        } else if(v[i] == 2) {
            vec[i + 1][1]++;
        } else {
            vec[i + 1][2]++;
        }
    }

    while(q--) {
        int l, r;
        infile >> l >> r;

        rep(k, 0, 3) {
            if (k > 0) {
                outfile << " ";
            }
            outfile << vec[r][k] - vec[l - 1][k];
        }
        outfile << endl;
    }
}

int main() {
    original_name;

    // Open input and output files
    ifstream infile("bcount.in");
    ofstream outfile("bcount.out");

    if (!infile) {
        cerr << "Error opening input file" << endl;
        return 1;
    }
    if (!outfile) {
        cerr << "Error opening output file" << endl;
        return 1;
    }

    solve(infile, outfile);

    // Close the files
    infile.close();
    outfile.close();

    return 0;
}
