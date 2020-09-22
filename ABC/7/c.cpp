#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9
// memo: 配列による実装が楽　dx = {0, 1, 0, -1}, dy = {1, 0, -1, 0}
//       sy,sx,gy,gxに注意
int main(void){
    int R,C,sx,sy,gx,gy;
    cin >> R >> C >> sy >> sx >> gy >> gx;
    sy--; sx--; gy--; gx--; 
    vector<vector<char>> c(R,vector<char>(C));
    REP(i,R)REP(j,C) cin >> c[i][j];

    vector<vector<int>> dist(R,vector<int>(C,-1));
    queue<P> q;
    q.push(P(sx,sy));
    dist[sy][sx] = 0;
    while(!q.empty()){
        P v = q.front();
        q.pop();
        //int count = 0;
        EFOR(i,-1,1){
            EFOR(j,-1,1){
                int dx = v.first + i;
                int dy = v.second + j;
                if(i == j || i == -j) continue;
                if(dx < 0 || dx >= R || dy < 0 || dy >= C) continue;
                if(c[dx][dy] == '#') continue;
                if(dist[dx][dy] != -1) continue;
                //cout << dx << "と" << dy << endl;
                dist[v.first + i][v.second + j] = dist[v.first][v.second] + 1;
                q.push(P(dx,dy));
                //count++;
            }
            //cout << count << endl;
        }
    }
    cout << dist[gy][gx] << endl;
    return 0;
}