#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2e10
#define MOD 1000000007

ll combo(ll n,ll r,ll mod = MOD){
    ll ans = 1;
    for (int i = n; i > n - r; --i) {
        ans = ans*i;
        ans %= mod;
    }
    for (int i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}
int main() {
    ll n,m; cin >> n >> m;
    vector<ll> step;
    ll prev = 0;
    vector<ll> dp(n+1,0);
    dp[0] = 1, dp[1] = 1;
    EFOR(i,2,n){
        dp[i] = dp[i-1] + dp[i-2];
        dp[i] %= MOD; 
    }
    REP(i,m){
        ll a; cin >> a;
        if(prev == a){
            cout << 0 << endl;
            return 0;
        }
        step.emplace_back(a-1-prev);
        prev = a+1;
    }
    step.emplace_back(n-prev);
    ll ans = 1;
    for(auto it : step){
        ans *= dp[it];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}