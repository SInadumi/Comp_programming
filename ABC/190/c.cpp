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
    int n,m,k, ans = 0;
    cin >> n >> m;
    vector<int> a(m+10), b(m+10);
    REP(i,m) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k+10),d(k+10);
    REP(i,k) cin >> c[i] >> d[i];
    FOR(bit,0,(1 << k)){
        int tmp = 0;
        vector<bool> ball(n);
        FOR(i,0,k){
            if((bit >> i) & 1){
                ball[c[i]] = 1;
            }else{
                ball[d[i]] = 1;
            }
        }
        REP(i,m) if(ball[a[i]] && ball[b[i]]) tmp++;
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}