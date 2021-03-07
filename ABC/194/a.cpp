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
    a = a + b;
    if(a >= 15 && b >= 8){
        cout << 1 << endl;
    }else if(a >= 10 && b >= 3){
        cout << 2 << endl;
    }else if(a >= 3){
        cout << 3 << endl;
    }else{
        cout << 4 << endl;
    }
    
    return 0;
}