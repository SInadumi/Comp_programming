#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

//O(N)
int main(void){
    ll N,A;
    cin >> N;
    map<ll,ll> m;
    ll ans = 0;
    REP(i,N){
        cin >> A;
        // 先にA+i，後にi-A．
        ans +=m[i - A];
        m[A + i]++;
    }
    cout << ans << endl;
    return 0;
}
// O(NlogN)
// int main(void){
//     ll N;
//     cin >> N;
//     vector<ll> A(N), B(N), C(N);
//     ll ans = 0;
//     REP(i,N){
//         cin >> A[i];
//         if(i - A[i] > 0) B[i - A[i]]++;
//         if(A[i] + i < N) C[A[i] + i]++;
//     }
//     REP(i,N){
//         ans += B[i] * C[i];
//     }
//     cout << ans << endl;
//     return 0;
// }