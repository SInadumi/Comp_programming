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
    string s; cin >> s;
    ll ans = 0;
    vector<int> a(s.size()+1,0);
    REP(i,s.size()){
        if(s[i] == '<') a[i+1] = max(a[i+1],a[i]+1);
    }
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == '>') a[i] = max(a[i], a[i+1]+1);
    }
    for(auto i : a){
        ans += i;
    }
    cout << ans << endl;
    //cout << accumulate(a.begin(),a.end(),0) << endl;
    return 0;
}