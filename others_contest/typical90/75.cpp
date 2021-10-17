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
vector<ll> primelist(ll _n){
    vector<ll> res;
    ll n = _n;
    for(ll i = 2; i*i <= _n; i++){
        if(n%i != 0) continue;
        while(n%i == 0){
            n /= i;
            res.push_back(i);
        }
    }
    if(n != 1LL) res.push_back(n);
    return res;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vector<ll> l = primelist(n);
    int ans = 0;
    for(int i = 1; i < SIZE(l); i <<= 1){
        ans++;
    }
    cout << ans << endl;
    return 0;
}