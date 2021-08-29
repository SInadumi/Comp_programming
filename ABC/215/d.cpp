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

vector<int> primelist(int n){
    vector<int> res;
    for(int i = 2; i*i <= n; i++){
        if(n%i != 0) continue;
        res.push_back(i);
        while(n%i == 0){
            n /= i;
        }
    }
    if(n != 1) res.push_back(n);
    return res;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<bool> ok(100010, true);
    REP(i,n){
        int a; cin >> a;
        auto t = primelist(a);
        FORE(it,t){
            if(!ok[it]) continue;
            for(int j = it; j < 100010; j += it){
                ok[j] = false;
            }
        }
    }
    vector<int> ans;

    EFOR(i,1,m){
        if(ok[i]) ans.push_back(i);
    }
    cout << SIZE(ans) << endl;
    FORE(i,ans) cout << i << endl;
    return 0;
}