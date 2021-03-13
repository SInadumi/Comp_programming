#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main(void){
    int w,n,k;
    cin >> w >> n >> k;
    vector<int> a(n+1,0),b(n+1,0);
    EFOR(i,1,n) cin >> a[i] >> b[i];

    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(k+1, vector<int>(w+1, 0)));

    EFOR(al,1,n){
        EFOR(be,1,k){
            EFOR(ga,1,w){
                if(ga >= a[al]){
                     dp[al][be][ga] = max(dp[al-1][be][ga], dp[al-1][be-1][ga-a[al]] + b[al]);
                }else{
                    dp[al][be][ga] = dp[al-1][be][ga];
                }
            }
        }
    }
    cout << dp[n][k][w] << endl;
    return 0;
}