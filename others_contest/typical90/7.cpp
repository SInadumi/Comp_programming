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
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    sort(ALL(a));
    ll q; cin >> q;
    REP(i,q){
        ll b; cin >> b;
        auto it = upper_bound(ALL(a),b);
        ll j = distance(a.begin(),it);
        if(j == 0) cout << a[j] - b << endl;
        else if(j == n) cout << b - a[j-1] << endl;
        else cout << min(a[j]-b, b-a[j-1]) << endl;
    }
    return 0;
}