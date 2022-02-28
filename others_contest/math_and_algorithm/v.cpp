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
    vector<ll> a(100000, 0);
    REP(i,n){
        int t; cin >> t;
        a[t]++;
    }
    ll ans = 0;
    EFOR(i,1,49999){
        if(a[i] == 0 || a[100000 - i] == 0) continue;
        ans += a[i] * a[100000 - i];
    }
    if(a[50000] > 1) ans += a[50000] * (a[50000] - 1) / 2; // overflowに注意
    cout << ans << endl;
    return 0;
}