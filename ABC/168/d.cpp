#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,I) for(const auto &(i):(I))
#define ALL(x) (x).begin,(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n,m; cin >> n >> m;
    vector<vector<int>> g(n,vector<int>());
    vector<int> tmp(n,-1);
    queue<int> q;
    REP(i,m){
        int a,b; cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    q.push(0);
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto it : g[v]){
            if(tmp[it] == -1){
                tmp[it] = v;
                q.push(it);
            }
        }
    }
    cout << "Yes" << endl;
    FOR(i,1,n){
        cout << tmp[i]+1 << endl;
    }
    return 0;
}