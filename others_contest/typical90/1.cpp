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
 
// 二分探索
ll n,l,k;
//greedy法による判定
bool can_split(vector<ll> &a, ll x){
    //bool can = true;
    ll num = 0;
    ll prev = 0;
    FOR(i,0,SIZE(a)){
        if(a[i] - prev >= x && l - a[i] >= x){
            num++;
            prev = a[i];
        } 
    }
    // tot += l - a[SIZE(a)-1];
    // if(tot < x) num--;
    if(num >= k) return true;
    else return false; 
}
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cin >> n >> l >> k;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    ll le = 0, ri = l+1;
    while(ri-le > 1){
        ll mid = (ri+le)/2;
        if(can_split(a,mid)) le = mid;
        else ri = mid;
    }
    cout << le << endl;
    return 0;
}