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

//　下 0 上 1 左 2 右 3
int dx[4] = {0,1,-1,0};
int dy[4] = {1,0,0,-1};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int h,w; cin >> h >> w;
    int rs,rt,cs,ct; cin >> rs >> cs >> rt >> ct;
    rs--,rt--,cs--,ct--;
    vector<string> mp(h);
    REP(i,h) cin >> mp[i];
    deque<tuple<int,int,int>> q;
    vector<vector<vector<int>>> cost(h, vector<vector<int>>(w, vector<int>(4, INF32)));
    REP(i,4){
        cost[rs][cs][i] = 0;
        q.emplace_back(rs,cs,i);
    }
    while(!q.empty()){
        auto [rv, cv, dict] = q.front();
        q.pop_front();
        REP(i,4){
            int r = rv + dx[i], c = cv + dy[i], ct = cost[rv][cv][dict];
            if(dict != i) ct += 1;
            if(r < 0 || c < 0 || r >= h || c >= w) continue;
            if(mp[r][c] == '#' || cost[r][c][i] <= ct) continue;
            
            cost[r][c][i] = ct;
            q.emplace_back(r,c,i);
        
        }
    }

    int ans = INF32;
    REP(i,4) chmin(ans, cost[rt][ct][i]);
    cout << ans << endl;
    return 0;
}