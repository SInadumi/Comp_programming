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
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    double t,l,x,y; cin >> t >> l >> x >> y;
    int q; cin >> q;
    REP(i,q){
        double e; cin >> e;
        double theta = 2 * PI * (e/t);
        double y2 = (-1) * (l/2) * sin(theta), z = (l/2) - (l/2) * cos(theta);
        double ans = x * x + (y2-y) * (y2 - y);
        ans = sqrt(ans);
        ans = atan2(z,ans);
        cout << ans * 180.0L / PI << endl;
    }
    return 0;
}