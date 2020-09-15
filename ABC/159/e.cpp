#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1e9
const int MOD = 1000000007;
typedef pair<ll,ll> P;
// bit全探索
int c[10][1005];
int main(void){
    int H,W,K,ans = INF;
    cin >> H >> W >> K;
    vector<vector<char>> S(H,vector<char>(W));
    REP(i,H){
        REP(j,W){
            cin >> S[i][j];
        }
    } 

    //ll ans = INF;
    REP(bit, 1<<(H-1)){
        int t = 0,res = 0;
        vector<int> div_map(H);
        REP(i,H){
            div_map[i] = t;
            if((bit >> i) & 1){
                t++;
            }
        }
        t++;
        REP(i,t)REP(j,W) c[i][j] = 0;
        REP(i,H)REP(j,W) c[div_map[i]][j] += (S[i][j] - '0');
        res = t - 1 ;

        vector<int> now(t); 
        auto add = [&](int j){
            REP(i,t) now[i] += c[i][j];
            REP(i,t) if(now[i] > K) return false;
            return true;
        };

        REP(j,W){
            // 縦ラインの間に存在する'1'の数がKを超えた時
            if(!add(j)){
                res++;
                now = vector<int>(t);
                // どんなに分割してもKを超える場合
                if(!add(j)){
                    res = INF;
                    break;
                }
            }
        }
        ans = min(ans,res);
    }
    cout << ans << endl;
    return 0;
}