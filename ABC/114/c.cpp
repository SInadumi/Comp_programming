
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

// 再帰関数による全列挙

ll dfs(ll n, ll x){
    if(x > n) return 0;
    string tmp = to_string(x);
    ll ret = 0;
    int o = 1, t = 1, h = 1, w = 0;
    REP(i,SIZE(tmp)){
        if(tmp[i] == '3') o--;
        else if(tmp[i] == '5') t--;
        else if(tmp[i] == '7') h--; 
        else w++;
    }
    if(o < 1 && t < 1 && h < 1 && w == 0) ret++;
    ret += dfs(n,stoll(tmp+'3'));
    ret += dfs(n,stoll(tmp+'5'));
    ret += dfs(n,stoll(tmp+'7'));
    return ret;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    cout << dfs(n,0) << endl;
    return 0;
}