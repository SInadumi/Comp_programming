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

    ll n; cin >> n;
    deque<ll> sa(n);
    ll sum = 0;
    REP(i,n){
        ll a; cin >> a;
        sa[i] += a;
    }REP(i,n){
        ll b; cin >> b;
        sa[i] -= b;
        sum += sa[i];
    }
    if(sum < 0){
        cout << -1 << endl;
        return 0;
    }
    sort(sa.begin(),sa.end(),greater<>());
    ll ans = 0, index = 0;
    ll tmp = 0;
    REP(i,n){  
        if(sa[i] >= 0) continue;
        tmp += sa[index++];
        ans++;
        while(tmp >= (-1)*sa[i] && i < n){
            tmp += sa[i];
            i++;
            ans++;
        }
        i--;
    }
    cout << ans << endl;
    return 0;

}