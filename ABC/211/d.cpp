#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,I) for(const auto &(i):(I))
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// 辺の重みが同じ -> BFS

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n,m; cin >> n >> m;
    vector<vector<ll>> map(n);
    REP(i,m){
        ll a,b; cin >> a >> b;
        a--, b--;
        map[a].push_back(b);
        map[b].push_back(a);
    }
    vector<ll> dist(n,0);
    vector<ll> ans(n,0);
    queue<ll> q;
    dist[0] = 0;
    ans[0] = 1;
    q.push(0);
    while(!q.empty()){
        ll v = q.front();
        q.pop();
        FORE(i,map[v]){
            if(i == 0) continue;
            if(dist[i] == 0){
                dist[i] += dist[v] + 1;
                ans[i] = ans[v];
                q.push(i);
            }else if(dist[i] != 0 && dist[i] == dist[v]+1){
                ans[i] += ans[v];
                ans[i] %= MOD;
            }
        }
    }
    cout << ans[n-1] << endl;
    return 0;
}