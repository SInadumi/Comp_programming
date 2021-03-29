#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2e10

int main() {

    ll l,r; cin >> l >> r;
    ll mod = 2019;
    ll ans = INF;
    if(r - l > 2019) l = 0, r = 2018;
    else l %= mod; r %= mod;
    EFOR(i,l,r){
        EFOR(j,i+1,r){
            ll tmp = (i*j)%mod;
            ans = min(ans, tmp);
        }
    }
    cout << ans << endl;
    return 0;
}