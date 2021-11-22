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
    vector<P> tot(n);
    REP(i,n){
        int x,y,z; cin >> x >> y >> z;
        tot[i].first = x + y + z;
        tot[i].second = i;
    }
    sort(ALL(tot), greater<>());
    vector<bool> ans(n, false);
    int cmp = tot[k-1].first;
    REP(i,n){
        if(i < k){
            ans[tot[i].second] = true;
            continue;
        }
        if(cmp - 300 <= tot[i].first){
            ans[tot[i].second] = true;
        }else{
            ans[tot[i].second] = false;
        }
    }
    REP(i,n){
        if(ans[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}