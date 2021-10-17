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

vector<ll> divisor(ll n){
    vector<ll> res;
    for(ll i = 1; i*i <= n; i++){
        if(n%i != 0LL) continue;
        res.push_back(i);
        if(i != n/i) res.push_back(n/i);
    }
    sort(ALL(res));
    return res;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll k; cin >> k;
    vector<ll> p = divisor(k);
    ll ans = 0;
    REP(i,SIZE(p)){
        FOR(j,i,SIZE(p)){
            if(k / p[i] < p[j]) continue;
            // p[i] * p[j]のOFに注意
            if(k % (p[i] * p[j]) != 0LL) continue;
            if(k / (p[i] * p[j]) < p[j]) continue;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}