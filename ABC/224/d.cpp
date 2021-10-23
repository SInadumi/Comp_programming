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

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int m; cin >> m;
    vector<vector<int>> g(9);
    REP(i,m){
        int u,v; cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    string p(9,'9');
    EFOR(i,1,8){
        int t; cin >> t;
        p[t-1] = i + '0';
    }
    queue<string> q;
    q.push(p);
    map<string, int> mp;
    mp[p] = 0;

    while(!q.empty()){
        string v = q.front();
        q.pop();
        int t;
        REP(i,SIZE(v)){
            if(v[i] == '9') t = i;
        }
        FORE(it, g[t]){
            string t2 = v;
            swap(t2[it], t2[t]);
            if(mp.count(t2) != 0) continue;
            mp[t2] = mp[v] + 1;
            q.push(t2);
        }
    }
    if(mp.count("123456789") == 0) cout << -1 << endl;
    else cout << mp["123456789"] << endl;
    return 0;
}