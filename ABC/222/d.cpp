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
#define MOD 998244353
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> a(n), b(n);
    REP(i,n) cin >> a[i];
    REP(i,n) cin >> b[i];
    vector<vector<ll>> dp(3010, vector<ll>(3010,0));
    vector<ll> tot(3010, 0);
    // int a,b; cin >> a >> b;
    dp[0][0] = 1;
    FOR(i,0,n){
        tot[0] = dp[i][0];
        FOR(j,1,3001) tot[j] = (tot[j-1] + dp[i][j])%MOD;
        EFOR(j,a[i],b[i]){
            dp[i+1][j] += tot[j];
            //dp[i+1][j] %= MOD;
        }
    }
    ll ans = 0;
    REP(i,3010){
        ans += dp[n][i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}