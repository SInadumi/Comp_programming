#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9
int h,w;
char c[510][510];
bool r[510][510];
// DFS
void DFS_search(int x, int y){
    if(x < 0 || x >= w || y < 0 || y >= h) return;
    if(c[x][y] == '#') return;
    if(r[x][y] == true) return;
    r[x][y] = true;
    //cout << x << " " << y << " bool:" << r[x][y] << endl;
    DFS_search(x+1,y);
    DFS_search(x-1,y);
    DFS_search(x,y+1);
    DFS_search(x,y-1);
}

int main(void){
    cin >> h >> w;
    int sx = - 1,sy = - 1,gx = - 1,gy = -1;
    REP(j,h)REP(i,w){
        cin >> c[i][j];
        if(c[i][j] == 's') sx = i, sy = j;
        if(c[i][j] == 'g') gx = i, gy = j;
    }
    // cout << sx << " " << sy << endl;
    // cout << gx << " " << gy << endl;
    DFS_search(sx,sy);
    // REP(j,h){
    //     REP(i,w) cout << r[i][j];
    //     cout << endl;
    // }
    if(r[gx][gy]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}