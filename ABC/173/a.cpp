#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    int ans=0;
    if(N%1000 != 0) ans = 1000 - N%1000;
    else ans = 0;
    cout << ans << endl;
    return 0;
}