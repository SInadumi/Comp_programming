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
    int N, W; cin >> N >> W;
    vector<ll> w(N+1), v(N+1);
    EFOR(i,1,N) cin >> w[i] >> v[i];
    vector<vector<ll>> dp(N+1, vector<ll>(W+1, 0));
    REP(i, W+1) dp[0][i] = 0;
    EFOR(i, 1, N){
        // weight copy 0 - w[i]
        REP(j, W+1) dp[i][j] = dp[i-1][j];
        // dp 更新（配るDP）
        REP(j, W+1){
            if(j + w[i] > W) continue;
            dp[i][j + w[i]] = max(dp[i-1][j] + v[i], dp[i-1][j + w[i]]);
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}