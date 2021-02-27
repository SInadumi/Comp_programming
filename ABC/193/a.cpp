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
    long double a,b;
    long double ans;
    cin >> a >> b;
    ans = b/a;
    cout << setprecision(15) << (1 - ans) * 100 << endl;
    return 0;
}