#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2e10
#define MOD 1000000007

int main() {
    ll n; cin >> n;
    deque<ll> a;
    REP(i,n){
        ll t; cin >> t;
        a.emplace_back(t);
    }
    sort(a.begin(), a.end());
    ll t;
    while(a.size() > 1){
        t = a.front();
        a.pop_front();
        REP(i,a.size()){
            a[i] %= t;
        }
        a.emplace_back(t);
        sort(a.begin(),a.end());
        while(a.front() == 0){
            a.pop_front();
            if(a.size() == 1) break;
        }
    }
    cout << t << endl;
    return 0;
}