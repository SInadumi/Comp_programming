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
    int n; cin >> n;
    vector<int> a(n),x(n);
    int prev = 0;
    REP(i,n){
        cin >> a[i];
        if(i == 0){
            prev = a[i];
            x[i] = 0;
        }else{
            x[i] = a[i] - prev;
            prev = a[i];
        }
    }
    ll money = 1000, stock = 0;
    FOR(i,1,n){
        if(x[i] > 0){
            stock = money / a[i-1];
            money = money % a[i-1];
            money += stock * a[i];
            stock = 0;
        }
    }
    cout << money << endl;
    return 0;
}