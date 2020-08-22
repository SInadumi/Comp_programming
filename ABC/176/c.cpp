#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

int main(void){
    ll N;
    cin >> N;
    vector<ll> A(N);
    REP(i,N) cin >> A[i];
    ll ans = 0;
    FOR(i,1,N){
        if(A[i-1] > A[i]){
            ans += A[i-1] - A[i];
            A[i] += A[i-1] - A[i];
        }
    }
    cout << ans << endl;

    return 0;
}