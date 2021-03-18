#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
vector<bool> dist;
void DFS(Graph &g, int v){
    dist[v] = true;
    for(auto it : g[v]){
        if(!dist[it]){
            DFS(g,it);
        }
    }
}

int main() {
    ll n,m; cin >> n >> m;
    Graph g(n);
    dist.assign(n,false);
    REP(i,m){
        ll a,b;
        cin >> a >> b;
        a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans = 0;
    REP(i,n){
        if(!dist[i]){
            DFS(g,i);
            ans++;
        }
    }
    // ans:グラフの連結数
    cout << ans-1 << endl;
    return 0;
}