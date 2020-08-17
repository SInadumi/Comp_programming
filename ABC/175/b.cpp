#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

int main(void){
    int N;
    cin >> N;
    vector<ll> L(N+10);
    REP(i,N){
        cin >> L[i];
    }
    ll cnt = 0;
    REP(i,N){
        FOR(j,i+1,N){
            if(L[i] == L[j]) continue;
            FOR(k,j+1,N){
                if(L[k] == L[i] || L[k] == L[j]) continue;
                if(L[i]+L[j] <= L[k]) continue;
                if(L[i]+L[k] <= L[j]) continue;
                if(L[j]+L[k] <= L[i]) continue;
                cnt++;

            }
        }
    }
    cout << cnt << endl;
    return 0;  
}