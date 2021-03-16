#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main(void){
    int n,m;
    cin >> n >> m;
    vector<vector<vector<int>>> dp(110, vector<vector<int>>(110, vector<int>(110, 0)));
    REP(i,n){
        int a,b,c,w;
        cin >> a >> b >> c >> w;
        dp[a][b][c] = max(dp[a][b][c], w);
    }
    EFOR(i,0,100){
        EFOR(j,0,100){
            EFOR(k,0,100){
                dp[i+1][j][k] = max(dp[i+1][j][k], dp[i][j][k]);
                dp[i][j+1][k] = max(dp[i][j+1][k], dp[i][j][k]);
                dp[i][j][k+1] = max(dp[i][j][k+1], dp[i][j][k]);
            }
        }
    }
    vector<int> ans;
    REP(i,m){
        int x,y,z;
        cin >> x >> y >> z;
        ans.emplace_back(dp[x][y][z]);
    }
    for(auto i : ans) cout << i << endl;

    return 0;
}