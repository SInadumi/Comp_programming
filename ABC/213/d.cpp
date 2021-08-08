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
vector<ll> dist(200010,0);
// 単純なDFS
void DFS(vector<vector<ll>> &map,  ll x){
    cout << x + 1 << ' ';
    sort(ALL(map[x]));
    FORE(i,map[x]){
        if(dist[i] != 0) continue;
        dist[i] = dist[x]+1;
        DFS(map, i);
        cout << x + 1 << ' ';
    }

    return ;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vector<vector<ll>> map(n);
    REP(i,n-1){
        ll a,b; cin >> a >> b;
        a--,b--;
        map[a].emplace_back(b);
        map[b].emplace_back(a);
    }
    dist[0] = 1;
    DFS(map, 0);
    return 0;
}