#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
 
int main() {

    ll n,k,ans=0;
    cin >> n >> k;
    EFOR(x,2,2*n){
        ll t = x-k;
        if(t >= 2 && t <= 2*n){
            ans += (ll)min(t-1, 2*n+1-t) * (ll)min(x-1, 2*n+1-x);
        }
    }
    cout << ans << endl;
    return 0;
}