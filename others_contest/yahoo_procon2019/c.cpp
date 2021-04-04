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

    ll k,a,b; cin >> k >> a >> b;
    if((b-a) <= 2){
        cout << k+1 << endl;
    }else{
        ll tmp1 = (k-(a-1))/2;
        ll tmp2 = (k-(a-1))%2;
        cout << a + tmp1*(b-a) + tmp2 << endl;
    }
    return 0;

}