#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define FORE(i,I) for(const auto &(i):(I))
#define INF 1000000000
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}

int main(void){
    int n; cin >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    map<int,int> t;
    REP(i,n) t[a[i]]++;
    ll ans = 0;
    FORE(i, t){
        FORE(j, t){
            if(i.first <= j.first) continue;
            ans += (1LL) * i.second * j.second * (ll)pow((j.first - i.first), 2);
        }
    }
    cout << ans << endl;
}

// int main(void){
//     ll n,ans = 0,sum1 = 0,sum2 = 0; cin >> n;
//     int first = 0;
//     REP(i,n){
//         int a;
//         cin >> a;
//         if(i == 0) sum1 = (ll)pow(a,2),sum2 = a;
//         else{
//             ans += i*(ll)pow(a,2) - 2*a*sum2 + sum1;
//             sum1 += (ll)pow(a,2);
//             sum2 += a;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }