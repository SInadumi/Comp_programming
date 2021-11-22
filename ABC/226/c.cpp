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
    int n; cin >> n;
    vector<vector<int>> g(n);
    vector<int> t(n), dist(n,0);
    queue<int> q;
    REP(i,n){
        int k; cin >> t[i] >> k;
        vector<int> tmp(k);
        REP(j,k){
            cin >> tmp[j];
            tmp[j]--;
        }
        g[i] = tmp;
    }
    q.push(n-1);
    dist[n-1] = 1;
    ll cost = t[n-1];
    while(!q.empty()){
        int v = q.front();
        q.pop();
        FORE(i, g[v]){
            if(dist[i]) continue;
            dist[i] = 1;
            cost += t[i];
            q.push(i);
        }
    }
    cout << cost << endl;
    return 0;
}