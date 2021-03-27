#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main() {

    ll n; cin >> n;
    vector<ll> l(n);
    REP(i,n) cin >> l[i];
    sort(l.begin(),l.end());

    ll ans = 0;
    REP(i,n){
        FOR(j,i+1,n){
            int right = l[i]+l[j];
            int index = lower_bound(l.begin(),l.end(), right) - l.begin();
            ans += max(index - (j+1), 0);
        }
    }
    cout << ans <<endl;
    return 0;
}