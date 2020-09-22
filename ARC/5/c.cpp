#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

/*  
    memo: 
    dequeを用いたBFS(0-1 BFS)
    壁'#'の座標をdequeの末尾に追加　, dist[x][y]++
    壁以外'.','s','g'の座標をdequeの先頭に追加
    このようにして，すべての座標に対して，「ある座標まで到達するために必要な，壁を打ち砕く回数」を記録する．
*/
int main(void){
    int h,w;
    int sx,sy,gx,gy;
    cin >> h >> w;
    vector<vector<char>> c(h,vector<char>(w));
    vector<vector<int>> dist(h,vector<int>(w,-1));
    vector<vector<bool>> vis(h,vector<bool>(w,false));
    deque<P> q;
    REP(i,h)REP(j,w){
        cin >> c[i][j];
        if(c[i][j] == 's') sx = i, sy = j;
        if(c[i][j] == 'g') gx = i, gy = j;
    }
    dist[sx][sy] = 0;
    q.push_back(P(sx,sy));

    while(!q.empty()){
        P v = q.front();
        q.pop_front();
        REP(i,4){
            int cx = v.first + dx[i];
            int cy = v.second + dy[i];
            if(cx < 0 || cx >= h || cy < 0 || cy >= w) continue;
            if(dist[cx][cy] != -1) continue;

            if(c[cx][cy] == '#'){
                dist[cx][cy] = dist[v.first][v.second] + 1;
                q.push_back(P(cx,cy));
            }
            if(c[cx][cy] != '#'){
                dist[cx][cy] = dist[v.first][v.second];
                q.push_front(P(cx,cy));
            }
        }
    }
    //REP(i,h){ REP(j,w){ cout << dist[i][j] << " ";}cout << endl; }
    if(dist[gx][gy] <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}