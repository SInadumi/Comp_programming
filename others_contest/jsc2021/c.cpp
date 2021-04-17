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
vector<int> divisor(int n) {
    vector<int> ret;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int a,b; cin >> a >> b;
    int ans = 1;
    vector<int> map(200010,0);
    EFOR(i,a,b){
        vector<int> tmp = divisor(i);
        for(auto it : tmp) map[it]++;
    }
    REP(i,map.size()){
        if(map[i] >= 2) ans = max(ans,i);
    }
    cout << ans << endl;
    return 0;
}