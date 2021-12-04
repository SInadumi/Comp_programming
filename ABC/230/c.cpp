#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
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
    ll n,a,b; cin >> n >> a >> b;
    ll p,q,r,s; cin >> p >> q >> r >> s;
    vector<vector<char>> map(q-p+1, vector<char>(s-r+1, '.'));
    ll left, right;
    left = max(1-a, 1-b), right = min(n-a, n-b);
    left = max({left, p-a, r-b});
    right = min({right, q-a, s-b});
    EFOR(k,left, right){
        ll i = a+k-p, j = b+k-r;
        map[i][j] = '#';
    }
    left = max(1-a, b-n), right = min(n-a, b-1);
    left = max({left, p-a, b-s});
    right = min({right, q-a, b-r});
    EFOR(k,left, right){
        ll i = a+k-p, j = b-k-r;
        map[i][j] = '#';
    }
    REP(i, q-p+1){
        REP(j, s-r+1){
            cout << map[i][j];
        }
        cout << endl;
    }
    return 0;
}