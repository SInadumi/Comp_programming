#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}

int main(void){
    int n,ans = 0; cin >> n;
    vector<int> p(n+10);
    vector<vector<bool>> sum(n+10, vector<bool>(10010,false));
    REP(i,n){
        cin >> p[i];
        sum[i][0] = true;
    }
    //sum[n][0] = true;
    REP(i,n){
        REP(j,10000){
            if(sum[i][j]){
                sum[i+1][j] = true;
                sum[i+1][j + p[i]] = true;
            }
        }
    }
    REP(i,10000){
        if(sum[n][i]) ans++;
    }
    cout << ans << endl;
    return 0;
}

// int main(void){
//     int n;
//     cin >> n;
//     unordered_set<int> sum;
//     sum.insert(0);
//     vector<int> p(n);
//     REP(i,n) cin >> p[i];
//     REP(i,n){
//         for(int j : sum){
//             sum.insert(j+p[i]);
//         }
//     }
//     cout << sum.size() << endl;
//     return 0;
// }