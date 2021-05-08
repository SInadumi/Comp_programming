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
    int a,b; cin >> a >> b;
    ll ma = 1000000000, mi = -1000000000;
    vector<ll> ans;
    ll tmp = 0;
    REP(i,a-1){
        ans.push_back(i+1);
        tmp += i+1;
    }
    ans.push_back(ma-tmp);
    tmp = 0;
    REP(i,b-1){
        ans.push_back(-(i+1));
        tmp += i+1;
    }
    ans.push_back(mi+tmp);
    ll t2 = 0;
    FORE(it,ans){
        cout << it << ' ';
        t2 += it;
    }
    cout << endl;
    //cout << t2 << endl;
    return 0;
}