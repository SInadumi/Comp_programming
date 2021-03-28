#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
#define MOD 998244353
// https://atcoder.jp/contests/arc116/editorial/891
int main() {
    ll n, ans = 0,tmp = 0;
    cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    sort(a.begin() , a.end());

    REP(i,n){
        ans += tmp * a[i];
        ans += a[i] * a[i];
        ans %= MOD;
        tmp = (2*tmp) + a[i];
        tmp %= MOD;
    }
  cout << ans << endl;
}