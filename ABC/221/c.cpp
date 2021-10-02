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
    string n; cin >> n;
    ll ans = 0;
    REP(bit, 1 << SIZE(n)){
        string a,b;
        FOR(i,0,SIZE(n)){
            if((bit >> i) & 1){
                if(n[i] == '0' && SIZE(a) == 0) continue;
                a.push_back(n[i]);
            }else{
                if(n[i] == '0' && SIZE(b) == 0) continue;
                b.push_back(n[i]);
            }
        }
        if(SIZE(a) == 0 || SIZE(b) == 0) continue;
        sort(ALL(a), greater<>());
        sort(ALL(b), greater<>());
        ans = max(ans, stoll(a) * stoll(b));
    }
    cout << ans << endl;
    return 0;
}