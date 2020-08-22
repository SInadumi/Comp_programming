#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

int main(void){
    int N,X,T;
    cin >> N >> X >> T;
    int ans = 0;
    int temp = N%X;
    if(temp == 0) cout << N/X*T << endl;
    else cout << N/X*T + T << endl;

    return 0;
}