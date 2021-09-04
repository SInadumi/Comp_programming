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
    ll q; cin >> q;
    deque<ll> a;
    priority_queue<ll, vector<ll>, greater<ll>> a2;
    bool is_flip = false;
    REP(i,q){
        int t; cin >> t;
        if(t == 1){
            ll x; cin >> x;
            a.push_back(x);
        }else if(t == 2){
            if(a2.empty()){
                cout << a[0] << endl;
                a.pop_front();
            }else{
                cout << a2.top() << endl;
                a2.pop();
                
            }
        }else{
            FORE(it,a){
                a2.push(it);
            }
            a.clear();
        }
    }
    return 0;
}