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
    ll n,m; cin >> n >> m;
    vector<queue<ll>> a(m);
    vector<vector<ll>> map(n);  // map[i] : ボールiが取り出せる筒の番号(高々2個の筒)
    REP(i,m){
        ll k; cin >> k;
        REP(j,k){
            ll a1; cin >> a1;
            a1--;
            a[i].push(a1);
        }
        map[a[i].front()].push_back(i);
    }
    queue<ll> que;              // 現在重複しているボール
    REP(i,n){
        if(SIZE(map[i]) == 2) que.push(i);
    }
    // 操作の繰り返し
    while(!que.empty()){
        int now = que.front();
        que.pop();
        FORE(i, map[now]){
            a[i].pop();
            if(a[i].empty()) continue;
            map[a[i].front()].push_back(i);
            if(SIZE(map[a[i].front()]) == 2) que.push(a[i].front());
        }
    }
    FORE(i,a){
        if(!i.empty()){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}