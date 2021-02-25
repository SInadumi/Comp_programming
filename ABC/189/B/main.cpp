#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(){

    int n,x,sum = 0;
    cin >> n >> x;
    vector<int> v(n+1),p(n+1);
    REP(i,n) cin >> v[i] >> p[i];
    REP(i,n){
        sum += v[i] * p[i];
        if(sum > x*100){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
