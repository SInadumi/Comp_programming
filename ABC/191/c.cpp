#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9
int dh[4] = {0,1,0,1};
int dw[4] = {0,0,1,1};
int main(void){
    int h,w,n = 0;
    cin >> h >> w;
    vector<vector<char>> m(10, vector<char>(10));
    REP(i,h)REP(j,w)cin >> m[i][j];
    FOR(i,0,h-1)FOR(j,0,w-1){
        int c = 0;
        REP(k,4){
            if(m[i + dh[k]][j + dw[k]] == '#') c++;
        }
        if(c == 1 || c == 3) n ++;
    }
    cout << n << endl;
    return 0;
}