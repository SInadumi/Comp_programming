#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
ll nums = 10000000000;

int main() {
    int n; cin >> n;
    string s,t; cin >> s;
    REP(i,s.size()){
        t.push_back(s[i]);
        if(t.size() <= 2) continue;
        if(t.substr(t.size()-3,t.size()) == "fox"){
            t = t.substr(0,t.size()-3);
        }
    }
    cout << t.size() << endl;
    return 0;
}