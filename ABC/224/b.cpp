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
    int h,w; cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w));
    REP(i,h)REP(j,w) cin >> a[i][j];
    bool ans = true;
    REP(i1,h){
        REP(j1,w){
            REP(i2,h){
                REP(j2,w){
                    if(i1 >= i2 || j1 >= j2) continue;
                    if(a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]) ans = false;
                }
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}