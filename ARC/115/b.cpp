#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000


int main() {

    int n;
    cin >> n;
    vector<vector<ll>> mat(n,vector<ll>(n));
    REP(i,n){
        REP(j,n) cin >> mat[i][j];
    }
    vector<ll> a(n,0),b(n,0);
    ll difa = mat[0][0], difb = mat[0][0];
    REP(i,n){
        difb = min(difb,mat[0][i]);
        difa = min(difa,mat[i][0]);
    }
    REP(i,n){
        a[i] = mat[i][0] - difa;
        b[i] = mat[0][i] - difb;
    }
    if(a[0]+b[0] != mat[0][0]){
        int diff = mat[0][0] - a[0] - b[0];
        REP(i,n) b[i] += diff;
    }
    REP(i,n){
        REP(j,n){
            if(a[i]+b[j] != mat[i][j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    REP(i,n) cout << a[i] << ' ';
    cout << endl;
    REP(i,n) cout << b[i] << ' ';
    cout << endl;

    return 0;
}