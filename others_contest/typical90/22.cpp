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
 
// Euclid の互除法
 
ll gcd(ll a, ll b){
    if(a < b) return gcd(b, a);
    if(b == 0) return a;
    return gcd(b, a%b);
}
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll a,b,c; cin >> a >> b >> c;
    ll r = gcd(a,b); r = gcd(r,c);
    cout << a/r + b/r + c/r - 3 << endl;
    return 0;
}