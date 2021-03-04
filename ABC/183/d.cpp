#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}

int main(void){
    ll n,w;
    cin >> n >> w;
    vector<P> het;
    REP(i,n){
        ll s,t,p;
        cin >> s >> t >> p;
        het.emplace_back(P(s,p));
        het.emplace_back(P(t,-p));
    }
    sort(het.begin(),het.end());
    bool ans = true;
    ll ret = 0;
    for(auto i : het){
        ret += i.second;
        if(ret > w) {
            ans=false;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}