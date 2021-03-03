#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef unsigned long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}

int main(void){
    ll a,b,c;
    cin >> a >> b >> c;
    a %= 10;
    if(a == 0) cout << 0 << endl;
    else{
        ll tmp = 4+power(b,c,4); // 余り0は4とみなす
        cout << power(a,tmp,10) << endl;
    }

    return 0;
}