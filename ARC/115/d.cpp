
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
vector<ll> t(51,0);
vector<ll> p(51,0);
ll saiki(ll n, ll x){
    // n = 0
    if(n == 0) return 1;

    // x = 1
    if(x == 1) return 0;
    x--;

    // 1 < x < t[n-1] + 1
    if(x < t[n-1] + 1) return saiki(n-1,x);
    x -= t[n-1];

    // x = t[n-1] + 1
    if(x == 1) return (p[n-1] + 1);
    x --;

    // t[n-1] + 1 < x < 2*t[n-1] + 1
    if(x < t[n-1]) return (p[n-1] + 1 + saiki(n-1,x));
    
    // x = 2*t[n-1] + 1
    return p[n];
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n,x; cin >> n >> x;
    p[0] = 1;
    t[0] = 1;
    EFOR(i,1,n){
        t[i] = 2*t[i-1] + 3;
        p[i] = 2*p[i-1] + 1;
    }
    cout << saiki(n,x) << endl;
    return 0;
}