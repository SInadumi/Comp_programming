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
int dh[3] = {0,1,1};
int dw[3] = {1,0,1};
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int h,w; cin >> h >> w;
    vector<vector<ll>> a(h,vector<ll>(w)), b(h,vector<ll>(w));
    REP(i,h)REP(j,w) cin >> a[i][j];
    REP(i,h)REP(j,w) cin >> b[i][j];
    ll ans = 0;
    REP(i,h-1){
        REP(j,w-1){
            int diff = a[i][j] - b[i][j];
            if(diff == 0) continue;
            ans += abs(diff);
            a[i][j] -= diff;
            REP(k,3){
                a[i+dh[k]][j+dw[k]] -= diff;
            }
        }
    }
    bool chk = true;
    REP(i,h)REP(j,w){
        if(a[i][j] != b[i][j]) chk = false;
    }
    if(chk) cout << "Yes\n" << ans << endl;
    else cout << "No" << endl;
 
    return 0;
}