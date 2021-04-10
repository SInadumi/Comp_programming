#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 10e12
#define MOD 1000000007

int main(void){

    ll n,m; cin >> n >> m;
    vector<ll> a(n),count(n,0);
    REP(i,n) cin >> a[i];
    ll ans = n;
    REP(i,m) count[a[i]]++;
    REP(i,n){
        if(count[i] == 0){
            ans = i;
            break;
        }
    }
    FOR(i,m,n){
        count[a[i-m]]--;
        count[a[i]]++;
        if(count[a[i-m]] == 0) ans = min(ans,a[i-m]);
    }
    cout << ans << endl;
    return 0;

}