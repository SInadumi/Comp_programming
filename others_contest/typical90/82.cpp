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
// 二分累乗法 : O(log n)
ll power(ll x, ll n, ll mod = MOD){
    ll res = 1;
    while(n > 0){
        if(n & 1) res = res * x % MOD;
        x = x * x % MOD;
        n >>= 1;
    }
    return res;
}

// 場合分け
ll f(ll x, ll mod = MOD){
    if(x % 2LL == 0){
        return ((x/2LL)%mod * (x+1LL)%mod)%mod;
    }else{
        return (x%mod * ((x+1LL)/2LL)%mod)%mod;
    }
}

// 逆元を用いると(x*(x+1))%MOD * (2の逆元) % MOD
// ただし，フェルマーの小定理(a^(MOD-1) = 1)より，(2の逆元)=a^(MOD-2)
// 参考:https://github.com/E869120/kyopro_educational_90/blob/main/sol/082a.cpp
// ABC 185 C, ABC 189 D, ABC 194 D
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    unsigned long long l,r; cin >> l >> r;
    ll ans = 0;
    vector<unsigned long long> pow(20,1);
    EFOR(i,1,19) pow[i] = (10LL * pow[i-1]);
    EFOR(i,1,19){
        unsigned long long p1 = min(pow[i]-1ULL, r);
        unsigned long long p2 = max(pow[i-1], l);
        if(p2 > p1) continue;
        p1 %= MOD, p2 %= MOD;
        p2--;
        ans += i * (f(p1) - f(p2) + MOD) % MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}