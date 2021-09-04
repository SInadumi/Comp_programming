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
// 順序付き集合 set , insert : sortされた位置に要素を挿入
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll l,q; cin >> l >> q;
    set<ll> a;
    a.insert(0);
    a.insert(l);
    REP(i,q){
        int c; cin >> c;
        ll x; cin >> x;

        if(c == 1){
            a.insert(x);
        }else{
            auto it = a.lower_bound(x);
            ll r = *it;
            ll l = *prev(it);
            cout << r - l << endl;
        }
    }
    return 0;
}