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
    int n,k; cin >> n >> k;
    vector<ll> x(n),y(n);
    set<ll> tx, ty;
    REP(i,n) cin >> x[i] >> y[i];
    REP(i,n) tx.insert(x[i]), ty.insert(y[i]);
    ll ans = INF64;
    FORE(sx,tx){
        FORE(sy,ty){
            FORE(ex,tx){
                FORE(ey,ty){
                    if(sx >= ex || sy >= ey) continue;
                    ll size = 1LL * (ex-sx) * (ey-sy);
                    int cnt = 0;
                    REP(i,n){
                        if(sx <= x[i] && ex >= x[i] && sy <= y[i] && ey >= y[i]){
                            cnt++;
                        }
                    }
                    if(cnt < k) continue;
                    ans = min(ans, size);
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}