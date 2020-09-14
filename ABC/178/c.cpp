#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
const int MOD = 1000000007;

// 逐次MODを取りながら累乗の計算
ll MODPOW(ll x,ll N){
    ll res = 1;
    FOR(i,0,N){
        res = res * x % MOD;
    }
    return res;
}

int main(void){
    ll N;
    cin >> N;
    unsigned long long ans = MODPOW(10,N) - MODPOW(9,N) - MODPOW(9,N) + MODPOW(8,N);
    ans %= MOD;
    ans = (ans + MOD) % MOD;
    cout << ans << endl;
    return 0;
}