#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int solve(ll n){
    int ret,cnt = 0; 
    if(n%2 != 0) ret = 0;
    else{
        while(n % 2 == 0){
            cnt++;
            n /= 2;
        }
        if(cnt > 1) ret = 1;
        else ret = 3;
    }
    return ret;
}

int main() {
    ll t; cin >> t;
    vector<ll> n(t);
    REP(i,t) cin >> n[i];
    REP(i,t){
        int tmp = solve(n[i]);
        if(tmp == 0) cout << "Odd" << endl;
        else if(tmp == 1) cout << "Even" << endl;
        else cout << "Same" << endl;
    }
    return 0;
}