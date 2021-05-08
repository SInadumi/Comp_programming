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
    cout << std::fixed << std::setprecision(15);
    double n,D,H; cin >> n >> D >> H;
    vector<double> d(n),h(n);
    REP(i,n) cin >> d[i] >> h[i];
    double ans = 0;
    REP(i,n){
        double tmp = H*d[i] - D*h[i];
        tmp /= (d[i]-D);
        ans = max(ans,tmp);
    }
    cout << ans << endl;
    return 0;
}