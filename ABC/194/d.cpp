#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}
//「確率pで成功する試行を成功するまで行うとき，試行回数の期待値は1/pである」
// E[x]：求める期待値とすると，E[x] = 1 + (1-p)E[x]である
// https://blog.hamayanhamayan.com/entry/2021/03/07/000733
int main(void){
    int n;
    double ans = 0;
    cin >> n;
    // 初めに1辺連結するための確率は(n-1)/n，2辺連結するための確率は，(n-2)/nである
    // その場合の期待値は逆数であるので，E[x] = n/(n-1) + n/(n-2) + ... + n
    FOR(i,1,n){
        ans += (double)n/(double)(n-i);
    }
    cout << fixed << setprecision(15)  << ans << endl;
    return 0;
}