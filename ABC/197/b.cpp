#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
int ans = 0;
int h,w,x,y;
int fh,fw;
vector<vector<bool>> dist;
void DFS(vector<string> &m, int x,int y){
    if(x < 0 || x >= h || y < 0 || y >= w) return;
    if(x != fw && y!= fh) return;
    if(m[x][y] == '#') return;
    if(dist[x][y]) return;
    ans++;
    dist[x][y] = true;
    DFS(m,x+1,y);
    DFS(m,x-1,y);
    DFS(m,x,y-1);
    DFS(m,x,y+1);
}

int main() {
    cin >> h >> w >> x >> y;
    vector<string> map(h);
    dist.assign(h+1,vector<bool>(w+1,false));
    fh = y-1, fw = x-1;
    REP(i,h) cin >> map[i];
    DFS(map, x-1, y-1);
    cout << ans << endl;
    return 0;
}