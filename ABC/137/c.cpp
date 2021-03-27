#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

ll combo(int n,int r){
    ll ans = 1;
    for (int i = n; i > n - r; --i) {
        ans = ans*i;
    }
    for (int i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

int main() {

    ll n; cin >> n;
    vector<ll> dp(10010,0);
    unordered_map<string,int> tmp;
    REP(i,n){
        string s;
        cin >> s;
        sort(s.begin(),s.end());
    tmp[s] += 1;
    }
    ll ans = 0;
    for(auto a : tmp){
        if(a.second >= 2){
            ans += combo(a.second,2);
        }
    }
    cout << ans << endl;
    return 0;
}