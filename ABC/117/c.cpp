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

    ll n,m; cin >> n >> m;
    vector<ll> x(m);
    REP(i,m) cin >> x[i];
    sort(x.begin(), x.end());
    vector<ll> t(m);
    REP(i,m-1){
        t[i] = x[i+1] - x[i];
    }
    sort(t.begin(),t.end(),greater<>());
    ll ans = 0;
    REP(i,m){
        if(i < n-1) continue;
        ans += t[i];
    }
    cout << ans << endl;
    return 0;

}