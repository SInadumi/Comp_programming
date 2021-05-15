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
    string s; cin >> s;
    int ans = 0;
    int c = 0;
    REP(i,10000){
        vector<int> mp(10,0);
        int t = i;
        REP(j,4){
            mp[t%10]++;
            t /= 10;
        }
        bool can = true;
        REP(j,10){
            if(s[j] == 'o' && mp[j] == 0) can = false;
            if(s[j] == 'x' && mp[j] > 0) can = false;
        }
        ans += can;
    }
    cout << ans << endl;
    return 0;
}