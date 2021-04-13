#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
#define MOD 1000000007
int main(void){
    int n,m,ans = -1;
    cin >> n >> m;
    vector<int> s(m),c(m);
    REP(i,m) cin >> s[i] >> c[i];
    for(int i = 1000; i >= 0; i--){
        string tmp = to_string(i);
        bool can = true;
        if(tmp.size() != n) can = false;
        REP(j,m){
            if((tmp[s[j]-1] - '0') != c[j]) can = false;
        }
        if(can) ans = i;
    }
    cout << ans << endl;
    return 0;
}