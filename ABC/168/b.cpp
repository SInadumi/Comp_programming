#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int K;
    string S;
    cin >> K;
    cin >> S;
    string temp;
    string temp2 = "...";
    if(S.length() <= K){
        cout << S << endl;
    }
    else{
        temp = S.substr(0,K);
        cout << temp + temp2 << endl;
    }
    return 0;
}