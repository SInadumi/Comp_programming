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
    ll n; cin >> n;
    vector<P> mp;
    REP(i,n){
        ll a,b;
        cin >> a >> b;
        mp.push_back({a, 1});
        mp.push_back({a + b, -1});
    }
    sort(ALL(mp));
    vector<ll> ans(n+1,0);
    ll tmp = 0;
    REP(i,SIZE(mp)){
        int j = i;
        while(mp[i].first == mp[j].first){
            tmp += mp[j].second;
            j++;
        }
        ans[tmp] += mp[j].first - mp[i].first;
        i = j-1;
    }
    EFOR(i,1,n){
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}