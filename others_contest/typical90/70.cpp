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

// ABC 102 c, ARC 122 B, ARC 071 D, ABC 127 E

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    vector<ll> x(n),y(n);
    REP(i,n){
        cin >> x[i] >> y[i];
    }
    sort(ALL(x));
    sort(ALL(y));
    // 中央値
    ll mx = x[n/2], my = y[n/2];
    ll ans = 0;
    REP(i,n){
        ans += abs(x[i] - mx) + abs(y[i] - my);
    }
    cout << ans << endl;
    return 0;
}