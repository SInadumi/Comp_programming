#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
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
    ll n,d; cin >> n >> d;
    vector<P> wall(n);
    REP(i,n) cin >> wall[i].first >> wall[i].second;
    sort(ALL(wall), [](P &a, P &b){return a.second < b.second;});
    // 破壊されていない壁のうち最も小さいLを範囲の左端としてパンチする
    ll ans = 0, prev = -INF64;
    FORE(it, wall){
        ll l = it.first, r = it.second;
        if(prev + d - 1 < l){
            ans++;
            prev = r;
        }
    }
    cout << ans << endl;
    return 0;
}