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
 
// UnionFind
 
struct UnionFind{
    // p[i] : iの親
    vector<int> p; 
    UnionFind(int n) : p(n){
        REP(i,n) p[i] = i;
    }
    int root(int x){
        if(p[x] == x) return x;
        return p[x] = root(p[x]);
    }
    void unite(int x, int y){
        x = root(x), y = root(y);
        if(x == y) return;
        p[x] = y;
    }
    bool same(int x, int y){
        x = root(x), y = root(y);
        return x == y;
    }
};
 
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int h,w,q; cin >> h >> w >> q;
    UnionFind g(h*w);
    vector<vector<bool>> used(h,vector<bool>(w,false));
    REP(i,q){
        int t; cin >> t;
        int r1,c1,r2,c2;
        if(t == 1){
            cin >> r1 >> c1;
            r1--, c1--;
            REP(j,4){
                int r = r1 + dx[j], c = c1 + dy[j];
                if(r < 0 || r >= h || c < 0 || c >= w) continue;
                if(!used[r][c]) continue;
                g.unite(w*r+c,w*r1+c1);
            }
            used[r1][c1] = true;
        }else{
            cin >> r1 >> c1 >> r2 >> c2;
            r1--,c1--,r2--,c2--;
            if(g.same(w*r1+c1, w*r2+c2) && used[r1][c1] && used[r2][c2]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}