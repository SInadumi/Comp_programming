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
 
// 木の直径を求める　スコア = 最大パスの長さ(木の直径) + 1 (最大パスの始点と終点を結び，閉路にする) 
// https://algo-logic.info/tree-diameter/#toc_id_2
 
queue<int> q;
vector<int> dist(100010,-1);
 
pair<int,int> BFS(vector<vector<int>> &g, int s){
    int ma = 0;
    int ret = 0;
    q.push(s);
    dist[s] = 0;
    while(!q.empty()){
        int v = q.front(); q.pop();
        FORE(i, g[v]){
            if(dist[i] != -1) continue;
            dist[i] = dist[v] + 1;
            q.push(i);
            if(ma < dist[i]){
                ma = dist[i];
                ret = i;
            }
        }
    }
    return {ret,ma};
}
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    vector<vector<int>> g(n);
    REP(i,n-1){
        int a,b; cin >> a >> b;
        a--,b--;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
 
    pair<int,int> a = BFS(g,0);
    fill(ALL(dist),-1);
    pair<int,int> b = BFS(g,a.first);
 
    cout << b.second + 1 << endl;
    return 0;
}