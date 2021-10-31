#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,I) for(const auto &(i):(I))
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<vector<ll>> b(n,vector<ll>(m)), c(n,vector<ll>(m));
    REP(i,n)REP(j,m) cin >> b[i][j];
    bool can = true;
    REP(i,n)REP(j,m) c[i][j] = b[0][0] + i * 7 + j;
    REP(i,n)REP(j,m-1)if(b[i][j]%7 == 0) can = false;
    if(can && b == c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

// 反例　B = [[7 8 9][14 15 16]]
// int main() {
//     cin.tie(0);
//     ios_base::sync_with_stdio(false);
//     int n,m; cin >> n >> m;
//     vector<vector<ll>> b(n,vector<ll>(m));
//     REP(i,n)REP(j,m) cin >> b[i][j];
//     bool can = true;
//     vector<ll> t;
//     REP(i,n){
//         if(i > 0){
//             t.push_back(b[i][0] - b[i-1][m-1]);
//         }
//         FOR(j,1,m){
//             //if(i == 0 && j == 0) continue;
//             if(b[i][j] != b[i][j-1] + 1) can = false;
//         }
//     }
//     bool can2 = true;
//     FOR(i,1,SIZE(t)){
//         if(t[i] != t[i-1] && t[i] != 7-m+1) can2 = false;
//     }
//     if(SIZE(t) == 1 && t[0] != 7 - m + 1) can2 = false;
//     if(can && can2) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }