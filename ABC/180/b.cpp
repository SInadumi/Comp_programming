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
    ll n;
    long double ans_m = 0, ans_y=0, ans_t= -IINF; 
    cin >> n;
    
    REP(i,n){
        long double x;
        cin >> x;
        ans_m += abs(x);
        ans_y += pow(abs(x),2);
        ans_t = max(ans_t, abs(x));
    }
    ans_y = sqrtl(ans_y);
    cout << fixed << setprecision(20) << ans_m << endl;
    cout << fixed << setprecision(20) << ans_y << endl;
    cout << fixed << setprecision(20) << ans_t << endl;
    return 0;
}