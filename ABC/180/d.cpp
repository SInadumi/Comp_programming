#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(void){
    
    ll ans = 0,x,y,a,b;
    cin >> x >> y >> a >> b;
    while((double)a*x <= 2e18 && a*x <= x+b && a*x < y){
        x *= a;
        ans++;
    }
    cout << ans + (y - x - 1) / b << endl;
    return 0;
}