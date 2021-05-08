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
ll modpow(ll x, ll n, ll mod = MOD){
    if(n == 0) return 1;
    if(n == 1) return x % mod;
    if(n%2 == 1) return (x * modpow(x,n-1)) % mod;
    ll ret = modpow(x,n/2);
    return (ret * ret) % mod;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    set<ll> a;
    REP(i,n){
        ll t; cin >> t;
        a.insert(t);
    }
    //sort(ALL(a),greater<>());
    ll ans = 1, tmp = 0;
    for(auto it : a){
        ans *= (it + 1 - tmp);
        ans %= MOD;
        tmp = it;
    }
 
    cout << ans << endl;
    return 0;
}