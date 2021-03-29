#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2e10

int main() {

    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll ans = (b-a)+1 - (b/c - a/c) - (b/d-a/d) + (b/lcm(c,d) - a/lcm(c,d));
    if(a%c == 0 || a%d == 0) ans--;
    cout << ans << endl;
    return 0;
}