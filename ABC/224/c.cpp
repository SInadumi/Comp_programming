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
    int n; cin >> n;
    vector<ll> x(n),y(n);
    REP(i,n) cin >> x[i] >> y[i];
    ll ans = 0;
    REP(i,n){
        FOR(j,i+1,n){
            FOR(k,j+1,n){
                ll dx1= x[j] - x[i], dx2= x[k] - x[i], dy1 = y[j] - y[i], dy2 = y[k] - y[i];
                if(dy1 * dx2 != dy2 * dx1) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}