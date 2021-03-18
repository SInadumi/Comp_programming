#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
int main() {
    ll n,k,s;
    cin >> n >> k >> s;
    REP(i,n){
        if(s < 1e9){
            if(i >= k) cout << s+1 << " ";
            else cout << s << " ";
        }else{
            if(i >= k) cout << 1 << " ";
            else cout << s << " ";
        }
    }
    cout << endl;
    return 0;
}