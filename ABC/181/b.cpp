#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(void){
    int n;
    ll ans = 0;
    cin >> n;
    REP(i,n){
        ll a, b, ret = 0;
        cin >> a >> b;
        ret = (b - a + 1) * (a + b) / 2;
        ans += ret;
    }
    cout << ans << endl;
    return 0;
}