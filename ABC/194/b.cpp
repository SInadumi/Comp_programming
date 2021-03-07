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

int main(void){
    int n, mina = 10001,minb = 10001;
    int s = 20001,sumab = 20001;
    cin >> n;
    vector<int> a(n),b(n);
    REP(i,n) cin >> a[i] >> b[i];
    REP(i,n){
        s = min(s, a[i]+b[i]);
        REP(j,n){
            if(i == j) continue;
            if(a[i]+b[j] < sumab){
                mina = a[i];
                minb = b[j];
                sumab = a[i]+b[j];
            }
        }
    }
    cout << min((max(mina,minb)),s) << endl;
    return 0;
}