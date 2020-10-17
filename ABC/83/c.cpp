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
    unsigned long long x,y,ans = 0;
    cin >> x >> y;
    while(x <= y){
        ans++;
        x *= 2;
    }
    cout << ans << endl;
    return 0;
}