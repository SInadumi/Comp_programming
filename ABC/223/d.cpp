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

// BFSによるトポロジカルソート

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<vector<int>> g(n);
    vector<int> dep(n,0);
    REP(i,m){
        int a,b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        dep[b] += 1;
    }
    priority_queue<int, vector<int>, greater<int>> q;
    vector<int> ans;
    // 入次数が0の頂点をqに入れる
    REP(i,n){
        if(dep[i] == 0) q.push(i);
    }
    while(!q.empty()){
        int v = q.top();
        ans.push_back(v);
        q.pop();
        FORE(it,g[v]){
            dep[it]--;
            if(dep[it] == 0) q.push(it);
        }
    }
    if(SIZE(ans) != n){
        cout << -1 << endl;
    }else{
        REP(i,n){
            cout << ans[i] + 1 << ' ';
        }
        cout << endl;
    }
    return 0;
}