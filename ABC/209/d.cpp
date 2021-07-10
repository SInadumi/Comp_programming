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
    ll n,q; cin >> n >> q;
    vector<vector<ll>> mp(n);
    vector<ll> dist(n,-1);
    REP(i,n-1){
        ll a,b; cin >> a >> b;
        a--, b--;
        mp[a].emplace_back(b);
        mp[b].emplace_back(a);
    }
    queue<ll> que;
    que.push(0);
    dist[0] = 0;
    while(!que.empty()){
        ll v = que.front();
        que.pop();
        FORE(i, mp[v]){
            if(dist[i] != -1) continue;
            dist[i] = dist[v]+1;
            que.push(i);
        }
    }

    REP(i,q){
        ll c,d; cin >> c >> d;
        c--, d--;
        if(abs(dist[c] - dist[d]) % 2 == 0) cout << "Town" << endl;
        else cout << "Road" << endl;
    }
    return 0;
}