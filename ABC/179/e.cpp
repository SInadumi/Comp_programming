#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1e9
const int MOD = 1000000007;
typedef pair<ll,ll> P;

int main(void){
    // tot -> 周期に入る前の合計
    ll n, x, m, len = 0, tot = 0,ans = 0;
    cin >> n >> x >> m;
    vector<ll> id(m,-1);
    vector<ll> a;
    
    while(id[x] == -1){
        a.push_back(x);
        id[x] = len;
        len++;
        tot += x;
        x = (x*x) % m;
    }

    ll c = len - id[x]; //cycle数
    ll s = 0;       // cycleの合計値
    FOR(i,id[x],len) s += a[i];
    if(n <= len){
        REP(i,n) ans += a[i];
    }else{
        ans += tot;
        n -= len;
        ans += s * (n / c);
        n %= c;
        REP(i,n) ans += a[id[x]+i];
    }
    cout << ans << endl;
}