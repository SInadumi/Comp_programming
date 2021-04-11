#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,a) for(auto &(i):(a))
#define ALL(x) (x).begin,(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int h,w,n,m; cin >> h >> w >> n >> m;
    // 1 : light, 2 : block
    vector<vector<int>> mp(h,vector<int>(w,0));
    vector<vector<int>> ma(h,vector<int>(w,0));
    REP(i,n){
        int a,b; cin >> a >> b; a--,b--;
        mp[a][b] = 1;
    }
    REP(i,m){
        int c,d; cin >> c >> d; c--,d--;
        mp[c][d] = 2;
    }
    REP(y,h){
        int t = 0;
        REP(x,w){
            if(mp[y][x] == 1) t = 1;
            if(mp[y][x] == 2) t = 0;
            ma[y][x] |= t;
        }
        t=0;
        for(int x=w-1;x>=0;x--){
            if(mp[y][x] == 1) t = 1;
            if(mp[y][x] == 2) t = 0;
            ma[y][x] |= t;
        }
    }
    REP(x,w){
        int t = 0;
        REP(y,h){
            if(mp[y][x] == 1) t = 1;
            if(mp[y][x] == 2) t = 0;
            ma[y][x] |= t;
        }
        t=0;
        for(int y=h-1;y>=0;y--){
            if(mp[y][x] == 1) t = 1;
            if(mp[y][x] == 2) t = 0;
            ma[y][x] |= t;
        }
    }
    int ans =0;
    REP(y,h){REP(x,w){ ans += ma[y][x];}}
    cout << ans << endl; 
    return 0;
}