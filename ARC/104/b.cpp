#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main() {
    int n,ans = 0; cin >> n;
    string s; cin >> s;
    REP(i,n){
        int tmp1=0, tmp2=0;
        FOR(j,i,n){
            if(s[j] == 'A') tmp1++;
            else if(s[j] == 'T') tmp1--;
            else if(s[j] == 'G') tmp2++;
            else tmp2--;
            if(tmp1 == 0 && tmp2 == 0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}