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
 
 
// DP 類題 : ABC 211 C　
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    string s; cin >> s;
    string t = "atcoder";
    vector<vector<ll>> dp(n+1,vector<ll>(SIZE(t)+1,0));
    dp[0][0] = 1;
    EFOR(i,1,n){
        dp[i][0] = 1;
        EFOR(j,1,SIZE(t)){
            if(s[i-1] == t[j-1]) dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%MOD;
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[SIZE(s)][SIZE(t)] << endl;
    return 0;
}