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

// 累積和
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll q; cin >> q;
    priority_queue<ll, vector<ll>, greater<ll>> queue;
    vector<ll> tot(q,0);
    REP(i,q){
        int p; cin >> p;
        ll x;
        if(i != 0) tot[i] += tot[i-1];
        if(p == 1){
            cin >> x;
            queue.push(x - tot[i]);
        }else if(p == 2){
            cin >> x;
            tot[i] += x;
        }else{
            cout << queue.top() + tot[i] << endl;
            queue.pop();
        }
    }
    return 0;
}