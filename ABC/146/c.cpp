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
    ll a,b; cin >> a >> b;
    unsigned long long x; cin >> x;
    ll l = 0, r = 1000000000;
    if(a+b > x){
        cout << 0 << endl;
        return 0;
    }
    if(a*r+b*to_string(r).length() <= x){
        cout << 1000000000 << endl;
        return 0;
    }
    while(r - l > 1){
        ll mid = (l+r)/2;
        ll d = to_string(mid).length();
        if(a*mid+b*d <= x){
            l = mid;
        }else{
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
}