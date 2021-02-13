#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(void){
    unsigned long long n, sq, ans = 0;
    cin >> n;
    while(n % 2 == 0) n /= 2;
    sq = sqrt(n);
    EFOR(i, 1, sq){
        if(n % i == 0) ans += 2;
    }
    if(sq * sq == n) ans--;
    cout << ans * 2 << endl;
    return 0;
}