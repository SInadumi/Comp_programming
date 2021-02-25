#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long int ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

// and : f(i) = f(i-1)
// or : f(i) = f(i-1) + f(i-1) +{2^i - f(i-1)} = 2^i - f(i-1)

int main(){

    ll n, ans = 1;
    cin >> n;

    REP(i,n){
        string s;
        cin >> s;
        if(s == "OR") ans += (ll)pow(2,i+1); // キャストなしはエラー
    }
    cout << ans << endl;
    return 0;
}
