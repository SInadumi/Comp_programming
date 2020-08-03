#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    ll N;
    cin >> N;
    string C;
    cin >> C;
    int W_n = count(C.begin(),C.end(),'W');
    int R_n = count(C.begin(),C.end(),'R');
    /*int Min_num;
    if(W_n > R_n) Min_num = W_n;
    else Min_num = R_n; 
    */
    int cnt = 0;
    int WW = C.length() - 1;
    int RR = 0;
    rep(k,N){
        if(C[RR] == 'W' && C[WW] == 'R'){
            C[RR] = 'R';
            C[WW] = 'W';
            RR++;
            WW--;
            cnt++;
        }
        if(C[RR] == 'R') RR++;
        if(C[WW] == 'W') WW--;
        if(RR >= WW) break;
    }
    cout << cnt << endl;
    return 0;
}