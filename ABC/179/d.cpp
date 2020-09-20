#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1e9
const int MOD = 998244353;

/*  DP 区間数え上げ O(KN)
//  与えられる区間が重複していないので，それぞれの区間の累積和が
//    i番目の移動方法回数となる．
*/
int main(void){
    ll n,k;
    cin >> n >> k;
    vector<ll> ans(n+10,0);
    vector<P> s(k);
    vector<ll> sum(n+10,0);
    REP(i,k){
        cin >> s[i].first >> s[i].second;
    }
    ans[0] = 1, sum[1] = 1; // 0-indexed

    FOR(i,1,n){
       for(auto it : s){
            ll l = max((ll)0, i - it.second);
            ll r = max((ll)0, i - it.first + 1);
            ans[i] += sum[r] - sum[l]; 
            ans[i] += MOD;
            ans[i] %= MOD;
       }
       sum[i+1] = ans[i] + sum[i];
       sum[i+1] += MOD;
       sum[i+1] %= MOD;
    }
    cout << ans[n-1] << endl;

    return 0;
}