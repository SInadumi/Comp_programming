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
    int a,b;
    cin >> a >> b;
    int fa = ceil((double)a/0.08), fb = ceil((double)b/0.1);
    int la = floor((double)(a+0.99)/0.08), lb = floor((double)(b+0.99)/0.1);

    while(fa != la && fb != lb){
        if(fa == fb){
            cout << fa << endl;
            return 0;
        }
        if(fa < fb) fa++;
        else if(fa > fb) fb++;
        else fa++,fb++;
    }
    cout << "-1" << endl;
    return 0;
}