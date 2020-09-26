#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

bool cmp(P a,P b){
    return a.second > b.second;
}
// LIS解法
/* LIS -> https://qiita.com/python_walker/items/d1e2be789f6e7a0851e5 */
int main(void){
    ll n;
    cin >> n;
    vector<P> wh(n);
    REP(i,n){
        ll w,h;
        cin >> w >> h;
        wh[i] = P(w,-h);
    }
    // hは昇順，wは降順にソート
    sort(wh.begin(),wh.end());
    REP(i,n) wh[i].second *= (-1);
    //REP(i,n) cout << wh[i].first << wh[i].second << endl;

    vector<ll> dp(n+1,IINF);    //増加部分列の長さ
    dp[0] = -IINF;
    FOR(i,0,n){
        // 先頭要素とwi[i]までの距離
        auto p = lower_bound(dp.begin(),dp.end(),wh[i].second) - dp.begin();
        dp[(int)p] = wh[i].second;
    }
    for(int i = n; i > 0; --i){
        if(dp[i] < IINF){
            cout << i << endl;
            break;
        }
    }
    return 0;
}