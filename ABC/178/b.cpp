#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)

int main(void){
    ll a,b,c,d;
    ll ans = 0;
    cin >> a >> b >> c >> d;
    ans = max({a*c,a*d,b*c,b*d});
    cout << ans << endl; 
    return 0;
}