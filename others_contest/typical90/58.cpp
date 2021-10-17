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

ll solve(ll x){
    string t = to_string(x);
    ll y = 0;
    REP(i,SIZE(t)){
        y += (t[i] - '0');
    }
    return stoll(to_string((x+y) % 100000));
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n,k; cin >> n >> k;
    vector<ll> cycle, nexts(1000000);
    REP(i,1000000) nexts[i] = solve(i);
    while(SIZE(cycle) <= k){

        cycle.emplace_back(n);
        n = nexts[n];

        bool chk = false;
        ll tot = 0, amari = 0;
        REP(i,SIZE(cycle)){
            if(cycle[i] == n){
                chk = true;
                amari = i;
                break;
            }
            tot++;
        }
        if(chk){
            k = (k - tot) % (SIZE(cycle) - tot) + tot;
            break;
        }
    }
    cout << cycle[k] << endl;

    return 0;
}