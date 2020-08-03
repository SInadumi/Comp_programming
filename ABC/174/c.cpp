#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    ll K,L;
    cin >> K;
    if((K%2) == 0 || (K%5) == 0) {
        cout << "-1" << endl;
        return 0;
    }else L = 9*K;

    ll seven=0;
    /* 7777..777 という数字を上からみていく */
    for(int cnt=1; cnt <= K; ++cnt){
        seven = seven * 10 + 7;
        seven %= K;
        if(seven == 0){
            cout << cnt << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}