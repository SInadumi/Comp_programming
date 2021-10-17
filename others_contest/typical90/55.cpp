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
    ll n,p,q; cin >> n >> p >> q;
    vector<ll> a(n);
    REP(i,n){
        cin >> a[i];
        // a[i] %= p;
    }
    ll ans = 0;
    FOR(i,0,n){
        FOR(j,i+1,n){
            FOR(k,j+1,n){
                FOR(l,k+1,n){
                    FOR(m,l+1,n){
                        ll a1 = (a[i] * a[j])%p;
                        ll a2 = (a[k] * a[l])%p;
                        ll a3 = (a1 * a[m])%p;
                        ll a4 = (a2 * a3)%p;
                        if(a4 == q) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}