#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}
int main(void){
    ll n,r = 0, p = 0, x = 0, q = -INF;
    cin >> n;
    REP(i,n){
        ll a;
        cin >> a;
        p += a;
        q = max(q,p);
        r = max(r,x+q);
        x += p;
    }
    cout << r << endl;
    return 0;
}