#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

bool is_cycle;
vector<bool> r;
void DFS_search(const Graph &g, int x, int prev){
    for(auto it : g[x]){
        if(it == prev) continue;
        if(r[it]) is_cycle = false;
        else{
            r[it] = true;
            DFS_search(g, it, x);
        }
    }
    return;
}

int main(void){
    int n,m,ans = 0;
    cin >> n >> m;
    Graph q(n);             //大きさnの無向グラフ
    r.assign(n,false);
    REP(i,m){
        int u,v;
        cin >> u >> v;
        u--; v--;           // 0-indexed
        q[u].push_back(v);
        q[v].push_back(u);
    }

    REP(i,n){
        if(r[i]) continue;
        is_cycle = true;
        DFS_search(q, i,-1);
        if(is_cycle) ans++;
    }
    cout << ans << endl;
    return 0;
}