#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
ll nums = 10000000000;
vector<bool> dist;
vector<ll> a,b;
ll DFS(Graph &g, int v){
    ll tmp1 = a[v], tmp2 = b[v];
    ll tmp = tmp1 - tmp2;
    dist[v] = true;
    for(auto it : g[v]){
        if(!dist[it]){
            tmp += DFS(g, it);
        }
    }
    return tmp;
}

int main() {
    ll n,m; cin >> n >> m;
    a.assign(n,0);
    b.assign(n,0);
    Graph g(n);
    REP(i,n) cin >> a[i];
    REP(i,n) cin >> b[i];
    REP(i,m){
        ll c,d;
        cin >> c >> d; c--; d--;
        g[c].push_back(d);
        g[d].push_back(c);
    }
    vector<ll> ans;
    dist.assign(n,false);
    REP(i, n){
        if(!dist[i]){
            ans.emplace_back(DFS(g, i));
        }
    }
    for(auto it : ans){
        if(it != 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}