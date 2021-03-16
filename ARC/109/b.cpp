#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
ll nums = 10000000000;
// 二分探索
// 1+2+...+k <= n+1 となる最大のｋを求める
int main() {
    ll n; cin >> n;
    ll max = 2e9,min = 0;
    while(max - min > 1){
        ll mid = (max +min) / 2;
        if(mid*(mid+1)/2 <= n+1){
            min = mid;
        }else{
            max = mid;
        }
    }

    cout << n - min + 1 << endl;
    return 0;
}