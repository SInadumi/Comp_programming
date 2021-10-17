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
// 1次元imos
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,q; cin >> n >> q;
    vector<ll> a(n),mp(n,0);
    REP(i,n) cin >> a[i];
    ll ans = 0;
    FOR(i,1,n){
        mp[i] = abs(a[i-1] - a[i]);
        ans += mp[i];
    }REP(i,q){
        int l,r; cin >> l >> r; 
        l--, r--;
        ll v; cin >> v;
        ans -= 
        if(r == n-1 && l == 0){}
        else if(r == n-1){
            ans -= mp[l];
            mp[l] = abs(a[l-1] - a[l] - v);
            ans += mp[l];
        }else if(l == 0){
            ans -= mp[r+1];
            mp[r+1] = abs(a[r] + v - a[r+1]);
            ans += mp[r+1];
        }else{
            ans -= mp[l] + mp[r+1];
            mp[l] = abs(a[l-1] - a[l] - v);
            mp[r+1] = abs(a[r] + v - a[r+1]);
            ans += mp[l] + mp[r+1];
        }
        cout << ans << endl;
    }
    return 0;
}