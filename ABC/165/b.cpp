#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

// 10^15より大きい数を扱う場合，double,long long等はつかってはならない．
// money *= 1.01などとしたら，丸め誤差が発生する．

int main(void){
    unsigned long long ans=0,money=100,X;
    cin >> X;
    while(X > money){
        ans++;
        money += money/100;
    }
    cout << ans << endl;
    return 0;
}