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
    vector<ll> a(n),left(n/2), right(n/2);
    REP(i,n){
        cin >> a[i];
    }
    ll le = 0, ri = n-1;ll ans = 0;
    vector<vector<ll>> t(200010);
    while(le < ri){
        // left[le] = a[le];
        // right[le] = a[ri];
        if(a[le] != a[ri]){
            ll i = a[ri], fi = a[ri];
            while(SIZE(t[i]) != 0){
                a[ri] = t[i][SIZE(t[i])-1];
                i = a[ri];
            }
            if(SIZE(t[fi]) != 0) t[fi].push_back(a[ri]);
            i = a[le], fi = a[le];
            while(SIZE(t[i]) != 0){
                a[le] = t[i][SIZE(t[i])-1];
                i = a[le];
            }
            if(SIZE(t[fi]) != 0) t[fi].push_back(a[le]);
            if(a[le] == a[ri]) continue; 
            t[a[le]].push_back(a[ri]);
            ans++;

        }
        le++, ri--;
    }
    // while(le<ri){
        cout << ans << endl;
    // }
    return 0;
}