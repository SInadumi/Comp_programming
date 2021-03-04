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
    ll n,m,ans = 0;
    cin >> n >> m;
    vector<ll> a(m), sa;
    REP(i,m){
        cin >> a[i];
    }
    if(m == 0) {cout << 1 << endl;return(0);}
    sort(a.begin(),a.end());
    ll prev = 0, k = INF;
    REP(i,m){
        ll tmp = a[i] - prev - 1;
        sa.emplace_back(tmp);
        prev = a[i];
        if(tmp != 0) k = min(k, tmp);
    }
    if(a[m-1] != n) sa.emplace_back(n-a[m-1]),k = min(k,n-a[m-1]);
    for(auto it : sa){
        double tmp = (double)it / k;
        ans += (ll)ceil(tmp);
    }
    cout << ans << endl;

    return 0;
}