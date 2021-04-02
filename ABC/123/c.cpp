#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2e10
#define MOD 1000000007

int main() {
    cout << fixed << setprecision(15);
    ll n,a,b,c,d,e; cin >> n >> a >> b >> c >> d >> e;
    ll ta = 0, tb = 0, tc = 0, td = 0;
    ll tmp = min({a,b,c,d,e});
    cout << (ll)ceil((long double)n/(long double)tmp) + 4 << endl;
    return 0;
}