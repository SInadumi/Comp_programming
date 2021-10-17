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

// ARC 119 A, ABC 159 E, ABC 089 C
// 想定解 : https://github.com/E869120/kyopro_educational_90/blob/main/sol/063.cpp
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int h, w; cin >> h >> w;
    vector<vector<int>> p(h, vector<int>(w));
    REP(i,h)REP(j,w) cin >> p[i][j];
    int ans = 0;
    FOR(bit, 1, (1 << h)){
        vector<int> t;
        // 行は全探索 O(2^h)
        REP(i,h){
            if((bit >> i) & 1) t.push_back(i);
        }

        map<int, int> score;
        // 選べる行で値がすべて重複している列を選択 O(w * h)
        REP(j,w){
            bool can = true;
            if(SIZE(t) != 1){
                REP(i,SIZE(t)-1){
                    if(p[t[i]][j] != p[t[i+1]][j]) can = false;
                }
            }
            if(!can) continue;
            score[p[t[0]][j]] += SIZE(t);
        }
        
        int tot = 0;
        FORE(i, score){
            tot = max(tot, i.second);
        }
        ans = max(ans, tot);
    }
    cout << ans << endl;
    return 0;
}