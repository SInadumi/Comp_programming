#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,I) for(const auto &i:I)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
// UnionFind

struct UnionFind{
    // p[i] : iの親
    vector<ll> p;
    // 集合のサイズ
    vector<ll> sz;
    // 要素数
    ll n;
    UnionFind(ll _n) : n(_n),p(_n),sz(_n,1){
        REP(i,n) p[i] = i;
    }
    ll root(ll x){
        if(p[x] == x) return x;
        return p[x] = root(p[x]);
    }
    void unite(ll x, ll y){
        x = root(x), y = root(y);
        if(x == y) return;
        if(sz[x] < sz[y]) swap(x,y); // conj y to x
        sz[x] += sz[y];
        p[y] = x;
    }
    bool same(ll x, ll y){
        x = root(x), y = root(y);
        return x == y;
    }
    ll size(ll x){
        return sz[root(x)];
    }
};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vector<tuple<ll,ll,ll>> m(n-1);
    REP(i,n-1){
        ll u,v,w; cin >> u >> v >> w;
        u--, v--;
        m[i] = {w,u,v};
    }
    
    sort(ALL(m));
    // 最小のwから，あるwで作れるf(i,j)の個数を，素集合データ構造のサイズで求める
    UnionFind g(n);
    ll ans = 0;
    for(auto &[w,u,v] : m){
        ans += g.size(u) * g.size(v) * w;
        g.unite(u,v);
    }
    cout << ans << endl;
    return 0;
}