#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

int main(void){
    int D,T,S;
    cin >> D >> T >> S;
    if(D <= T*S) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}