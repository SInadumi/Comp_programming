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

// 累積を利用 or ランレングス圧縮　ABC 136 D
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a(SIZE(s),0);
    a[0] = 1;
    ll ans = 0;
    bool is_ok = false;
    FOR(i,1,SIZE(s)){
        if(s[i-1] == s[i]){
            a[i] = a[i-1];
            if(is_ok) ans += a[i];
            continue;
        }
        is_ok = true;
        a[i] = i;
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}