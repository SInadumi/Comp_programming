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
    int k; cin >> k;
    // x mod 9 -> 0 == (xの各桁の数字の和) mod 9 -> 0
    if(k % 9 != 0){
        cout << 0 << endl;
        return 0;
    }
    // dp[i] : あるxにおける各桁の数の和がiとなる組み合わせ
    vector<ll> dp(100010, 0);
    //REP(i,10) dp[i] = 1;
    dp[0] = 1;
    EFOR(i, 1, k){
        int t = min(9, i);
        EFOR(j, 1, t){
            dp[i] += dp[i-j];
        }
        dp[i] %= MOD;
    }
    cout << dp[k] << endl;
    return 0;
}