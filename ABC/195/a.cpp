#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main(void){
    int h,m;
    cin >> m >> h;
    if(h%m == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}