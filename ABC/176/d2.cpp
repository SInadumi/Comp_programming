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
    int ch,cw; cin >> ch >> cw; ch--, cw--;
    int dh,dw; cin >> dh >> dw; dh--, dw--;
    vector<string> s(h);
    REP(i,h) cin >> s[i];
    vector<vector<int>> cost(h,vector<int>(w, INF32)), vis(h,vector<int>(w, 0));
    deque<pair<int,int>> q;
    q.push_front({ch,cw});
    cost[ch][cw] = 0;

    while(!q.empty()){
        auto [vh,vw] = q.front(); 
        q.pop_front();
        if(vis[vh][vw]) continue;
        vis[vh][vw] = 1;
        REP(i,4){
            int x = vh + dx[i], y = vw + dy[i];
            if(x < 0 || y < 0 || x >= h || y >= w) continue;
            if(s[x][y] == '.' && cost[x][y] > cost[vh][vw]){
                cost[x][y] = cost[vh][vw];
                q.push_front({x,y});
            }
        }
        EFOR(i,-2,2){
            EFOR(j,-2,2){
                int x = vh + i, y = vw + j;
                if(x < 0 || y < 0 || x >= h || y >= w) continue;
                if(cost[x][y] <= cost[vh][vw]) continue;
                cost[x][y] = cost[vh][vw] + 1;
                if(s[x][y] == '.') q.push_back({x,y});
            }
        }
    }
    if(cost[dh][dw] == INF32) cout << -1 << endl;
    else cout << cost[dh][dw] << endl;
    return 0;
}