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
    long double x, y ,r,t = 0;
    int st=0, end = 0;
    int bt=0,top = 0;
    ll ans = 0;
    cin >> x >> y >> r;
    st = ceil(x - r), end = floor(x + r);
    r = nextafter(r, INFINITY);
    EFOR(i, st, end){
        t = sqrt(pow(r,2) - pow((x-i),2));
        bt = ceil(y - t), top = floor(y + t);
        ans += top - bt + 1;
    }
    cout << ans<< endl;
    return 0;
}