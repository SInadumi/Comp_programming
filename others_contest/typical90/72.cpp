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
int h, w;
vector<vector<char>> mp(16, vector<char>(16));
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int solve(vector<vector<bool>> &dist, int fx, int fy, int x, int y){
    if(fx == x && fy == y && dist[x][y]) return 0;
    int ret = -10000;
    dist[x][y] = true;
    REP(i,4){
        int vx = x + dx[i], vy = y + dy[i];
        if(vx < 0 || vy < 0 || vy >= w || vx >= h) continue;
        if((fx != vx || fy != vy) && dist[vx][vy]) continue;
        if(mp[vx][vy] == '#') continue;
        ret = max(ret, solve(dist, fx, fy, vx, vy) + 1);
    }
    dist[x][y] = false;
    return ret;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cin >> h >> w;
    REP(i,h)REP(j,w) cin >> mp[i][j];
    int ans = -1;
    vector<vector<bool>> dist(h, vector<bool>(w, false));
    REP(i,h){
        REP(j,w){
            if(mp[i][j] == '#') continue;
            //dist[0][0] = true;
            ans = max(ans, solve(dist,i,j,i,j));
        }
    }
    if(ans <= 2) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}