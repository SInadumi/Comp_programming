#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    ll X,D,K;
    cin >> X >> K >> D;

    X = abs(X);
    ll MOD,WARI,ans = 0;
    WARI = X / D;
    MOD = X % D;
    if(WARI > K) ans = X - K*D;
    else{

        if((K-WARI) % 2 == 0 ){
            ans = MOD;
        }else ans = abs(MOD - D);
    }
    cout << abs(ans) << endl;

    return 0;
}