#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

char a[10][10];
bool r[10][10];
int tmp = 0;
void DFS_padding(int x, int y){
    if(x < 0 || x >= 10 || y < 0 || y >= 10) return;
    if(a[x][y] == 'x') return;
    if(r[x][y]) return;
    r[x][y] = true;
    tmp++;
    DFS_padding(x-1,y);
    DFS_padding(x+1,y);
    DFS_padding(x,y-1);
    DFS_padding(x,y+1);
}

int main(void){
    int cnt = 0,sx = -1, sy = -1;
    bool can = false;
    REP(i,10)REP(j,10){
        cin >> a[i][j];
        if(a[i][j] == 'o'){ 
            cnt++;
            sx = i, sy = j;
        }
    }

    REP(i,10){
        REP(j,10){
            
            if(a[i][j] == 'o') continue;
            a[i][j] = 'o';
            // 埋め立て開始
            DFS_padding(sx,sy);
            if(cnt + 1 == tmp){
                can = true;
                break;
            }
            // 要素の初期化
            a[i][j] = 'x';
            REP(l,10)REP(m,10) r[l][m] = false;
            tmp = 0;
        }
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}