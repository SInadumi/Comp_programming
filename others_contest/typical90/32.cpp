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
 
// 2次元imos法
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    REP(i,n)REP(j,n) cin >> a[i][j];
    int m; cin >> m;
    vector<int> x(m),y(m);
    REP(i,m){
        int x1,y1; cin >> x1 >> y1;
        x1--,y1--;
        x[i] = x1, y[i] = y1;
    }
    vector<int> tmp;
    REP(i,n) tmp.push_back(i);
    int ans = INF32;
    do{
        bool is_ok = true;
        int tot = a[tmp[0]][0];
        FOR(i,1,n){
            REP(j,m){
                if(tmp[i] ==  x[j] && tmp[i-1] == y[j]) is_ok = false;
                if(tmp[i] == y[j] && tmp[i-1] == x[j]) is_ok = false;
            }
            tot += a[tmp[i]][i];
        }
        if(is_ok) chmin(ans,tot);
    }while(next_permutation(ALL(tmp)));
    if(ans != INF32) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}