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

    ll n,p; cin >> n >> p;
    vector<P> tmp;
    for(ll i = 2; i*i <= p; i++){
        if(p%i != 0) continue;
        int t = 0;
        while(p%i == 0){
            t++;
            p /= i;
        }
        tmp.push_back({i,t});
    }
    tmp.push_back({p,1});
    sort(tmp.begin(), tmp.end(), greater<>());
    ll ans = 1;
    for(auto it : tmp){
        ans *= powl(it.first,(it.second/n));
    }
    cout << ans << endl;
    return 0;

}