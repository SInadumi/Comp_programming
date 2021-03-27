#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main() {
    string s; cin >> s;
    string ans;
    FOR(i,1,s.size()){
        ans.push_back(s[i]);
    }
    ans.push_back(s[0]);
    cout << ans << endl;
    return 0;
}