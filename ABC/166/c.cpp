#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

int main(void){
    ll N,M;
    cin >> N >> M;
    vector<ll> H(N+10);
    vector<ll> ma(N+10);
    FOR(i,1,N+1){
        cin >> H[i];
        ma[i] = 0;
    }
    ll ans = 0;
    REP(i,M){
        ll A,B;
        cin >> A >> B;
        // A->Bの記録
        ma[A] = max(ma[A],H[B]);
        // B->Aの記録
        ma[B] = max(ma[B],H[A]);
    }
    // 最大値とHを比べる
    FOR(i,1,N+1) if(H[i] > ma[i]) ans++;
    cout << ans << endl;
    return 0;
}

//TLE
/*int main (void){
    ll N,M;
    cin >> N >> M;
    vector<ll> H(N);
    vector<ll> A(M);
    vector<ll> B(M);
    REP(i,N){
        cin >> H[i];
    }
    REP(i,M){
        cin >> A[i] >> B[i];
    }
    ll ans = 0;
    FOR(i,1,N+1){
        bool good = true;
        REP(j,M){
            ll temp;
            if(A[j] == i) temp = B[j];
            else if(B[j] == i) temp = A[j];
            else continue;
            if(H[i-1] <= H[temp-1]) good = false;
        }
        if(good) ans++;
    }
    cout << ans << endl;

    return 0;
}*/