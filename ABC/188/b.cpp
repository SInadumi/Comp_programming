#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(void){
    int sum = 0;
    int n;
    cin >> n;
    vector<int> a(n+1), b(n+1);
    REP(i, n) cin >> a[i];
    REP(i, n) cin >> b[i];
    REP(i, n){
        REP(j, n){
            sum += a[i] * b[i];
        }
    }
    if(sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}