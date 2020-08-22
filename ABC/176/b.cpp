#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

int main(void){
    string N;
    cin >> N;
    ll ans = 0;
    FOR(i,0,N.length()){
        ans += N[i] - '0';
    }
    if(ans % 9 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}