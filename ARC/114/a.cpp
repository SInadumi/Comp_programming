#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

vector<int> Eratosthenes(int n){
    vector<int> tmp(n);
    vector<int> res;
    REP(i,n){
        tmp[i] = 1;
    }
    FOR(i,2,sqrt(n)){
        if(tmp[i]){
            for(int j = 0;i*(j+2) < n; j++){
                tmp[i*(j+2)] = 0;
            }
        }
    }
    for(int i = 2; i < n; i++){
		if(tmp[i]){
            res.emplace_back(i);
		}
	}
    return res;
}

ll gcd(ll x, ll y){
    if(x < y) swap(x,y);
    while(y > 0){
        int r = x%y;
        x = y;
        y = r;
    }
    return x;
}
 
int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    for (int i = 0; i < N; ++i) cin >> X[i];
    vector<int> primes = Eratosthenes(50);
 
    ll ans = 2e18;
    for (int i = 0; i < (1 << primes.size()); i++) {
        ll ret = 1;
        for (int j = 0; j < primes.size(); j++) {
            int ttt = i >> j;
            if (1 & (i >> j)) {
                ret *= primes[j];
            }
        }
        bool ok = true;
        for (ll x : X) {
            if (gcd(x, ret) == 1) {
                ok = false;
            }
        }
        if (ok) {
            ans = min(ans, ret);
        }
    }
    cout << ans << endl;
 
    return 0;
}

// int main(){
//     ll n,ans = 2e18; cin >> n;
//     vector<int> x(n);
//     REP(i,n) cin >> x[i];
//     vector<int> prime = Eratosthenes(50);
//     REP(i, 1<<prime.size()){
//         ll ret = 1;
//         REP(j,1<<prime.size()){
//             if(i >> j & 1){
//                 ret *= prime[j];
//             }
//         }
//         bool can = true;
//         for(auto it : x){
//             if(gcd(it,ret) == 1) can=false;
//         }
//         if(can) ans = min(ans,ret);
//     }
//     cout << ans << endl;

//     return 0;
// }
// int main(void){

//     ll n; cin >> n;
//     list<int> tmp = Eratosthenes(50);
//     unordered_set<ll> ans;
//     REP(i,n){
//         ll x; cin >> x;
//         for(auto it : tmp){
//             if(gcd(it,x) != 1){
//                 ans.insert(it);
//                 break;
//             }
//         }
//     }
//     ll ret = 1;
//     for(auto it : ans){
//         ret *= it;
//     }
//     cout << ret << endl;
//     return 0;
// }