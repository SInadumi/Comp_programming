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

ll combo(ll n,ll r,ll mod = MOD){
    if(n == 0) return 0;
    ll ans = 1;
    for (int i = n; i > n - r; --i) {
        ans = ans*i;
        ans %= mod;
    }
    for (int i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vector<ll> a(n);//, b(1000000010, 0);
    REP(i,n){
        cin >> a[i];
        //b[a]++;
    }
    sort(ALL(a));
    ll ans = 0;
    ll t = 0,l = 1;
    FOR(i,1,n){
        t++;
        if(a[i-1] != a[i]){
            ans += (n - t) * l;
            l = 1;
            continue;
        }
        l++;
    } 
    cout << ans  << endl;
    return 0;
}