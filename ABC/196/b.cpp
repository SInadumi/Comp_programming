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
    string a;
    cin >> a;
    string ans;
    for(char it : a){
        if(it == '.') break;
        ans.push_back(it);
    }
    cout << ans << endl;
    return 0;
}