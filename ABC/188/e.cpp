#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long int ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1e12

int main(){
    ll n,m, ans_max = -INF;
    cin >> n >> m;
    vector<ll> a(n, 0);
    vector<P> root(m);
    vector<ll> ans(n, INF);
 
    REP(i, n) cin >> a[i];
    REP(i, m) cin >> root[i].first >> root[i].second;
    sort(root.begin(), root.end());

    REP(i,m){
        ll from = root[i].first, to = root[i].second;
        from--, to--;
        ans[to] = min({ans[to], ans[from], a[from]});
    }
    REP(i,n){
        ans_max = max(ans_max, a[i] - ans[i]);
    }
    cout << ans_max << endl;

    return 0;
}