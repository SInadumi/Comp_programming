#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}

int main(void){
    ll n,ans = 0, X = 0;
    cin >> n;
    vector<ll> x(n);
    REP(i,n){
        ll a,b;
        cin >> a >> b;
        X -= a;
        x[i] = 2*a + b;
    }
    sort(x.begin(),x.end());
    while(X <= 0){
        X += x.back();
        x.pop_back();
        ans++;
    }
    cout << ans << endl;
    return 0;
}