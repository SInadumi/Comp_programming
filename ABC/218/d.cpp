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
    int n; cin >> n;
    vector<P> x(n);
    REP(i,n){
        cin >> x[i].first >> x[i].second;
    }
    sort(ALL(x));
    int ans = 0;
    REP(i,n){
        FOR(j,i+1,n){
            P t1,t2;
            if(x[j].first <= x[i].first || x[j].second <= x[i].second) continue;
            t1 = {x[i].first, x[j].second};
            t2 = {x[j].first, x[i].second};
            // binary_search
            if(binary_search(ALL(x), t1) && binary_search(ALL(x), t2)) ans++;

        }
    }
    cout << ans << endl;
    return 0;
}