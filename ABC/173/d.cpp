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
// ある辺の間に挿入したときの「心地よさ」を昇順で評価する
int main(void){
    ll n,ans=0;
    cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    sort(a.begin(),a.end(),greater<>());
    deque<ll> maps;
    maps.push_back(a[0]);
    FOR(i,1,n){
        ans += maps.back();
        maps.pop_back();
        maps.push_front(a[i]);
        maps.push_front(a[i]);
    }
    cout << ans << endl;
    return 0;
}