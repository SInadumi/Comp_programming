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
    ll n,x,num = 0;
    cin >> n >> x;
    vector<ll> a(n + 10);
    REP(i,n){
        ll t;
        cin >> t;
        if(t != x) cout << t << " ";
    }
    return 0;
}