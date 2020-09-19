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

ll divs(ll n){
    ll cnt = 0;
    for(ll i = 1; i * i <= n; ++i){
        if(n % i == 0){
            cnt ++;
            if(n/i != i) cnt++;
        }
    }
    return cnt;
}

int main(void){
    ll n,ans = 0;
    cin >> n;
    for(ll a = 1; a < n; ++a){
       ll b = n / a;
       if(a * b >= n) b--;
       ans += b;

    }
    cout << ans << endl;
    return 0;
}