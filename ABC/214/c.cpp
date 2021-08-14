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

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vector<ll> s(n),t(n);
    priority_queue<P, vector<P>, greater<P>> q;
    REP(i,n) cin >> s[i];
    REP(i,n){
        ll t; cin >> t;
        q.push({t,i});
    }
    vector<ll> ans(n,-1);
    ll tot = 0;
    while(tot < n){
        P v =  q.top();
        q.pop();
        if(ans[v.second] == -1) ans[v.second] = v.first, tot++;
        q.push({v.first+s[v.second], (v.second+1)%n});
    }
    FORE(i,ans) cout << i << endl;
}

// int main() {
//     cin.tie(0);
//     ios_base::sync_with_stdio(false);
//     ll n; cin >> n;
//     vector<ll> s(n),t(n);
//     REP(i,n) cin >> s[i];
//     REP(i,n) cin >> t[i];
//     vector<ll> memo(n,10e10);
//     REP(i,2*n){
//         memo[(i+1)%n] = min(memo[i%n] + s[i%n], t[(i+1)%n]);
//     }
//     FORE(i,memo){
//         cout << i << endl;
//     }
//     return 0;
// }