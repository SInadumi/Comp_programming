#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,I) for(const auto &(i):(I))
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
 
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,s; cin >> n >> s;
    vector<int> a(n+1);
    EFOR(i,1,n) cin >> a[i];
    vector<vector<bool>> dp(n+1, vector<bool>(s+1, false));
    dp[0][0] = true;
    EFOR(i, 1, n){
        EFOR(j, 0, s){
            if(j - a[i] < 0){
                dp[i][j] = dp[i-1][j];
            }else{
                if(dp[i-1][j] || dp[i-1][j - a[i]]) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }
    if(dp[n][s]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}