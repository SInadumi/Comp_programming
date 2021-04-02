#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2e10
#define MOD 1000000007

int main() {
    cout << fixed << setprecision(15);
    long double n,k; cin >> n >> k;
    long double ans = 0;
    int t = 0;
    EFOR(i,1,n){
        int t = 0, c = i;
        while(c < k){
            c *= 2;
            t++;
        }
        ans += (1/n) / powl(2,t);
    }
    cout << ans << endl;
    return 0;
}