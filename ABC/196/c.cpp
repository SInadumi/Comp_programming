#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main() {
    ll n; cin >> n;
    ll ans = 0;
    for(int i = 2; i <= 12; i += 2){
        int d1 = i/2;
        int d2 = to_string(n).length()/2;
        if(d1 < d2){
            if(d1 == 1) ans += 9;
            else ans += 9 * (ll)pow(10,d1-1);
            continue;
        }
        ll tmp = (ll)pow(10,d1-1);
        ll count = 0;
        while(to_string(tmp).length() == d1){
            string aa = to_string(tmp) + to_string(tmp);
            if(stoll(aa) > n) break;
            tmp++;
            count++;
        }
        ans += count;
        break;
    }
    cout << ans << endl;
    return 0;
}