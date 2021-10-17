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
    ll n; cin >> n;
    vector<vector<int>> g(n);
    REP(i,n-1){
        int a,b; cin >> a >> b;
        a--, b--;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    queue<int> q;
    vector<int> depth(n,-1);
    q.push(0);
    depth[0] = 0;
    int odd = 0,even = 1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        FORE(i, g[v]){
            if(depth[i] != -1) continue;
            depth[i] = depth[v] ^ 1;
            if(depth[i]%2 == 0) even++;
            else odd++;
            q.push(i);
        }
    }
    int cnt = 0,tmp;
    if(even > odd) tmp = 0;
    else tmp = 1;
    REP(i,n){
        if(cnt >= n/2) break;
        if(depth[i]%2 == tmp){
            cout << i+1 << ' ';
            cnt++;
        }
    }
    cout << endl;
    return 0;
}