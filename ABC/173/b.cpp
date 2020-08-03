#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    ll N;
    cin >> N;
    string S[N+10];
    rep(i,N) cin >> S[i];
    int c1=0,c2=0,c3=0,c4=0;
    rep(i,N){
        if(S[i] == "AC") c1++;
        if(S[i] == "WA") c2++;
        if(S[i] == "TLE") c3++;
        if(S[i] == "RE") c4++;
    }
    cout << "AC x " << c1 << endl;
    cout << "WA x " << c2 << endl;
    cout << "TLE x " << c3<<endl;
    cout << "RE x " << c4 << endl;
    return 0;
}