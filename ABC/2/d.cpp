#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

// bit全探索
int main(void){
    int n,m,ans = 0;
    cin >> n >> m;
    vector<vector<int>> f(n+10,vector<int>(n+10));
    REP(i,m){
        int x,y;
        cin >> x >> y;
        f[x][y] = 1,f[y][x] = 1;
    }
    FOR(b,1,(1 << n)){
        bool can = true;
        vector<int> res;
        REP(i,n){
            if((b >> i) & 1){
                res.push_back(i+1);
            }
        }
        for(auto x : res){
            for(auto y : res){
                if(x == y) continue;
                if(f[x][y] != 1) can = false;
            }
        }
        if(can) ans = max(ans,(int)res.size());
    }
    cout << ans << endl;
    return 0;
}