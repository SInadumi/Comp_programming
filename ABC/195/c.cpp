#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main(void){
    ll n,ans = 0;
    cin >> n;

    if(n >= 1000) ans += n-999;
    if(n >= 1000000) ans += n-999999;
    if(n >= 1000000000) ans += n-999999999;
    if(n >= 1000000000000) ans += n-999999999999;
    if(n >= 1000000000000000) ans += n-999999999999999;

    cout << ans << endl;
    return 0;
}
