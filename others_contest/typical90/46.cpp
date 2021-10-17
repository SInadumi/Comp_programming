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
    vector<ll> ma(46,0),mb(46,0),mc(46,0);
    REP(i,n){
        ll a; cin >> a;
        ma[a%46]++;
    }
    REP(i,n){
        ll b; cin >> b;
        mb[b%46]++;
    }
    REP(i,n){
        ll c; cin >> c;
        mc[c%46]++;
    }
    ll ans = 0;
    REP(i,46){
        REP(j,46){
            REP(k,46){
                if((i+j+k)%46 != 0) continue;
                ans += ma[i] * mb[j] * mc[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}