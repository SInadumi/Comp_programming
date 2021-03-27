#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2073741824

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    ll ans = INF;
    FOR(bit,0,1<<n){
        vector<ll> tmp;
        ll sum = a[0];
        int prev = (bit >> 0) & 1;
        REP(i,n){
            if(((bit>>i) & 1) == prev) sum |= a[i];
            else tmp.emplace_back(sum), sum = a[i];
            prev = (bit>>i) & 1;
        }
        tmp.emplace_back(sum);
        ll sum2 = 0;
        for(auto it : tmp){
            sum2 ^= it;
        }
        ans = min(ans,sum2);
    }
    cout << ans << endl;
    return 0;
}