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

// ll power(ll x, ll n) {
//     ll ret = 1;
//     while (n > 0) {
//         if (n & 1) ret = ret * x;  // n の最下位bitが 1 ならば x^(2^i) をかける
//         x = x * x;
//         n >>= 1;
//     }
//     return ret;
// }

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    map<char,int> mp;
    string x; cin >> x;
    REP(i,SIZE(x)){
        mp[x[i]] = i+1;
    }
    int n; cin >> n;
    vector<pair<string,int>> cnt(n,{"",0});
    vector<string> s(n);
    REP(i,n){
        cin >> s[i];
        cnt[i].second = i;

        REP(j,SIZE(s[i])){
            int sss  = SIZE(x);
            ll ddd = SIZE(s[i]) - 1 - j;
            cnt[i].first.push_back(mp[s[i][j]]);
        }
    }
    sort(ALL(cnt));
    FORE(i, cnt){
        cout << s[i.second] << endl;
    }
    return 0;
}