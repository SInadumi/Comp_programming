#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
const int MOD = 1000000007;

int main(void){
    int S;
    cin >> S;
    vector<ll> A(S+10,0);
    ll ans = 0;
    A[0] = 1;
    EFOR(i,3,S){
        A[i] = (A[i-1] + A[i-3])%MOD;
    }
    cout << A[S] << endl;
    return 0;
}