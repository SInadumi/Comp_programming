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

ll combo(ll n, ll r){
    ll ans = 1;
    ll j = 1;
    for(ll i = n; i > n-r; i--){
        ans *= i;
        ans /= j;
        j++;
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vector<int> a(3,0);
    REP(i,n){
        int t; cin >> t;
        a[t-1]++;
    }
    ll ans = 0;
    REP(i,3){
        ans += combo(a[i], 2);
    }
    cout << ans << endl;
    return 0;
}