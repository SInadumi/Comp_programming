
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
ll power(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x;
        n >>= 1;
    }
    return ret;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll a,b; cin >> a >> b;
    ll ansa = 0,ansb = 0;
    a--;
    // c:b,a-1を4で割ったあまり
    // b,...,b-cのXORをとる
    for(ll i = (b/4)*4; i <= b; i++) ansb ^= i;
    for(ll i = (a/4)*4; i <= a; i++) ansa ^= i;
    // F(a,b) = F(0,b) ^ F(0,a-1)
    cout << (ansb ^ ansa) << endl;
    return 0;
}