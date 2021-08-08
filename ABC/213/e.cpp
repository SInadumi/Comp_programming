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

// 01BFS

int dx[4] = {0,1,-1,0};
int dy[4] = {1,0,0,-1};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int h,w; cin >> h >> w;
    vector<string> s(h);
    REP(i,h) cin >> s[i];
    deque<pair<int,int>> q;
    vector<vector<int>> cost(h,vector<int>(w,INF32)), vis(h,vector<int>(w,0));
    q.push_front({0,0});
    cost[0][0] = 0;
    while(!q.empty()){
        pair<int,int> v = q.front();
        q.pop_front();
        if(vis[v.first][v.second]) continue;
        vis[v.first][v.second] = 1;

        // '.'で繋がっている道を探索
        REP(i,4){
            int x = v.first + dx[i], y = v.second + dy[i];
            if(x < 0 || x >= h || y < 0 || y >= w) continue;
            if(cost[x][y] < cost[v.first][v.second]) continue;
            if(s[x][y] == '.'){
                cost[x][y] = cost[v.first][v.second];
                q.push_front({x,y});
            }
        }
        
        // 周囲2マスの探索(exist k = l = 2)
        for(int k = -2; k <= 2; k++){
            for(int l = -2; l <= 2; l++){
                int kx = v.first + k, ly = v.second+l;
                if(abs(k) + abs(l) == 4) continue;
                if(kx < 0 || kx >= h || ly < 0 || ly >= w) continue;
                if(cost[kx][ly] <= cost[v.first][v.second]) continue;
                cost[kx][ly] = cost[v.first][v.second] + 1;
                q.push_back({kx,ly});
            }
        }
    }
    cout << cost[h-1][w-1] << endl;
    return 0;
}