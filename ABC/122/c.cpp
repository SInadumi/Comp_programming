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
    ll n,q; cin >> n >> q;
    string s; cin >> s;
    vector<int> dp(100010);
    dp[0] = 0;
    FOR(i,0,n-1){ 
        if(s[i] == 'A' && s[i+1] == 'C'){
            dp[i+1]++;
        }
        dp[i+1] += dp[i];
    }
    REP(i,q){
        int l,r;
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << endl;
    }
    return 0;
}