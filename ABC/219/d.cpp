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
#define INF32 2147483646 
#define INF64 9223372036854775806
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,x,y; cin >> n >> x >> y;
    vector<int> a(n+1),b(n+1);
    EFOR(i,1,n) cin >> a[i] >> b[i];
    // dp[i][j][k] : 
    // i個目までの弁当でj個のたこ焼きとk個のたい焼きを構成する時に購入する最小の弁当の数
    vector<vector<vector<int>>> dp(301, vector<vector<int>>(301, vector<int>(301, INF32)));
    dp[0][0][0] = 0;
    EFOR(i,1,n){
        EFOR(j,0,x){
            EFOR(k,0,y){
                // if(dp[i][j][k] == INF32) continue;
                // iを購入する
                int min_x = min(x, j + a[i]), min_y = min(y, k + b[i]);
                dp[i][min_x][min_y] = min(dp[i-1][j][k] + 1, dp[i][min_x][min_y]);
                // iを購入しない
                dp[i][j][k] = min(dp[i][j][k], dp[i-1][j][k]);
            }
        }
    }
    if(dp[n][x][y] != INF32) cout << dp[n][x][y] << endl;
    else cout << -1 << endl;
    return 0;
}