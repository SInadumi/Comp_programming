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
    ll k,n;
    cin >> n >> k;
    vector<int> p(n);
    REP(i,n) cin >> p[i];
    long double ans = 0.0, ans_t = 0.0;
    vector<long double> prev(n,0);
    REP(i,k){
        long double tmp = (long double)p[i];
        long double tmp2 = tmp*(tmp+1) / 2;
        ans += tmp2 / tmp;
        prev[i] = tmp2 / tmp;
    }
    ans_t = ans;
    FOR(i,k,n){
        long double tmp = (long double)p[i];
        long double tmp2 = tmp*(tmp+1) / 2;
        ans_t += tmp2 / tmp - prev[i-k];
        ans = max(ans, ans_t);
        prev[i] = tmp2 / tmp;
    }
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}