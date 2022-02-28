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
    int n; cin >> n;
    vector<int> h(n, 0);
    REP(i, n) cin >> h[i];
    vector<int> dp(n, 0);
    dp[0] = 0, dp[1] = abs(h[1] - h[0]);
    FOR(i,2,n){
        int cost1 = abs(h[i] - h[i-1]), cost2 = abs(h[i] - h[i-2]);
        dp[i] = min(dp[i-1] + cost1, dp[i-2] + cost2);
    }
    cout << dp[n-1] << endl;
    return 0;
}