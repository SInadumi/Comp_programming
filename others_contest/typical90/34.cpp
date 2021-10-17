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
    int n,k; cin >> n >> k;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    ll ans = 0, now = 0, tot = 0;
    map<int, int> m;
    REP(i,n){
        while(now < n){
            if(m[a[now]] == 0 && tot == k) break;
            if(m[a[now]] == 0) tot++;
            m[a[now]]++;
            now++;
        }
        ans = max(ans, now - i);
        if(m[a[i]] == 1) tot--;
        m[a[i]]--;
    }
    cout << ans << endl;
    return 0;
}