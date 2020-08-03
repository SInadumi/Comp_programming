#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main (void){
    int N;
    cin >> N;
    int a = N % 10;
    if(a == 3) cout << "bon" <<endl;
    else if(a ==0 || a == 1 || a== 6 || a== 8){
        cout << "pon" << endl;
    }
    else cout << "hon" << endl;
    return 0;
}