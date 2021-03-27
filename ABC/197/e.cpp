#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 10e9
#define PI acos(-1)
bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
    return true;
}
int main() {
    ll n; cin >> n;
    vector<P> ball(n+1);
    EFOR(i,1,n) cin >> ball[i].first >> ball[i].second;
    sort(ball.begin(), ball.end(), cmp);
    // dp[i][j] : 色iのボールのうち,j=0なら一番左,
    //            j=1なら一番右のものと同じ位置にいて,
    //            色iのボールは全て回収し終わった状態になるまでの最小の時間
    vector<vector<ll>> dp(n+1, vector<ll>(2,INF));
    ll pr=0, pl=0;
    dp[0][0] = 0,dp[0][1] = 0;
    int index = 1;
    for(int i = 1; i <= n;){
        int j = i;
        ll l = ball[i].first, r = ball[i].first;
        for(;j <= n && ball[i].second == ball[j].second; j++) r = ball[j].first;

        ll tmp;
        if(pl > r) tmp = pl - l;
        else tmp = r - pl + r - l;
        dp[index][0] = dp[index-1][0] + tmp;
        if(pr > r) tmp = pr - l;
        else tmp = r - pr + r - l;
        dp[index][0] = min(dp[index][0], dp[index-1][1] + tmp);

        if(pr < l) tmp = r - pr;
        else tmp = pr - l + r - l;
        dp[index][1] = dp[index-1][1] + tmp;
        if(pl < l) tmp = r - pl;
        else tmp = pl - l + r - l;
        dp[index][1] = min(dp[index][1],dp[index-1][0] + tmp);

        pr = r;
        pl = l;
        index++;
        i = j;
    }
    cout << min(dp[index-1][0] +abs(pl), dp[index-1][1] +abs(pr)) << endl;
    return 0;
}