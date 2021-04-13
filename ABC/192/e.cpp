#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
const ll infl = 1LL << 60;
#define PI acos(-1)
#define fore(i,a) for(auto &i:a)
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
int main() {
    ll n,m,x,y; cin >> n >> m >> x >> y;
    x--; y--;
    vector<pair<ll, P>> rail[n];
    REP(i,m){
        ll a,b,t,k; cin >> a >> b >> t >> k;
        a--; b--;
        rail[a].push_back({b,{t,k}});
        rail[b].push_back({a,{t,k}});
    }
    min_priority_queue<P> q;
    vector<ll> dist(n,0);
    vector<ll> ans(n,infl);
    ans[x] = 0;
    q.push({x,0});
    while(!q.empty()){
        auto v = q.top();
        q.pop();
        ll cst = v.second;
        int cu = v.first;
        if(cu == y){
            cout << ans[y] << endl;
            return 0;
        }
        if(dist[cu]) continue;
        dist[cu] = 1;
        for(auto it : rail[cu]){
            ll to = it.first, t = it.second.first, k = it.second.second;
            ll tmp = (cst + k - 1)/k * k + t;
            if(chmin(ans[to], tmp)){
                q.push({to,ans[to]});
            }
            // if(ans[to] > tmp){
            //     ans[to] = tmp;
            //     q.push({to, tmp});
            // }
        }
    }
    cout << -1 << endl;
    return 0;
}