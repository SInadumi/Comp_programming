#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

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

//TLE
/*int main(void){
    ll N;
    cin >> N;
    vector<ll> A(N);
    REP(i,N) cin >> A[i];
    ll ans = 0;
    REP(i,N){
        FOR(j,i,N){
            ll I,J;
            I = A[i] + i;
            J = j - A[j];
            if(I == J) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}*/