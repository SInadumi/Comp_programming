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

    int n; cin >> n;
    vector<int> h(n);
    REP(i,n) cin >> h[i];
    int ans = 0;
    
    while(1){
        bool is_zero = true;
        REP(i,n){
            if(h[i] > 0) is_zero = false;
        }
        if(is_zero) break;
        int i = 0;
        while(i < n){
            if(h[i] == 0) i++;
            else{
                ans++;
                while(i < n && h[i] > 0){
                    h[i]--;
                    i++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;

}