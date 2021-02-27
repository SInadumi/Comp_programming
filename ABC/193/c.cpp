#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(void){
    ll n,ans = 0;
    cin >> n;
    // hash_set : https://cpprefjp.github.io/reference/unordered_set/unordered_set.html
    unordered_set<ll> s;

    for(ll i = 2; i * i <= n; i++){
        ll tmp = i * i;
        while(tmp <= n){
            s.insert(tmp);
            tmp *= i;
        }
    }
    cout << n-s.size() << endl;
    return 0;
}