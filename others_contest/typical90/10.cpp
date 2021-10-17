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
    int n; cin >> n;
    vector<int> one(n+1),two(n+1);
    one[0] = 0, two[0] = 0;
    EFOR(i,1,n){
        int c,p; cin >> c >> p;
        if(c == 1){
            one[i] = one[i-1] + p;
            two[i] = two[i-1];
        }else{
            two[i] = two[i-1] + p;
            one[i] = one[i-1];
        }
    }
    int q; cin >> q;
    REP(i,q){
        int l,r; cin >> l >> r;
        cout << (one[r] - one[l-1]) << ' ' << (two[r] - two[l-1]) << endl;
    }
    return 0;
}