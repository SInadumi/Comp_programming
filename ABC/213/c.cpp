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
    ll h,w,n; cin >> h >> w >> n;
    vector<P> a(n),b(n);
    REP(i,n){
        cin >> a[i].first >> b[i].first;
        a[i].second = i, b[i].second = i;
    }
    sort(ALL(a));
    sort(ALL(b));
    vector<P> ans(n);
    ll an = 1, bn = 1;
    REP(i,n){
        ans[a[i].second].first = an;
        ans[b[i].second].second = bn;
        if(i == n-1) continue;
        if(a[i].first < a[i+1].first) an++;
        if(b[i].first < b[i+1].first) bn++;
    }
    FORE(i,ans){
        cout << i.first << ' ' << i.second << endl;
    }

    return 0;
}