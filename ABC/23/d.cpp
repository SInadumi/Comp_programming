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
int n; 
bool solve(vector<ll> &h, vector<ll> &s, ll x){
    bool ret = true;
    // x以下で割るための制限時間
    vector<ll> limit(n,0);
    REP(i,n){
        if(h[i] > x) return false;
        limit[i] = (x-h[i])/s[i];
    }
    sort(ALL(limit));
    REP(i,n){
        if(limit[i] < i) ret = false;
    }
    return ret;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cin >> n;
    vector<ll> h(n),s(n),limit(n,0);
    REP(i,n) cin >> h[i] >> s[i];
    ll l = 0, r = INF64;
    while(r-l > 1){
        ll mid = (r + l)/2;
        if(solve(h, s, mid)) r = mid;
        else l = mid;
    }
    cout << r << endl;
    return 0;
}