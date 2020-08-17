#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

int main(void){
    string S;
    cin >> S;

    if(S[0]=='R' && S[1] == 'R' && S[2] == 'R'){
        cout << "3" << endl;
        return 0;
    }
    if(S[0]=='S' && S[1] == 'S' && S[2] == 'S'){
        cout << "0" << endl;
        return 0;
    }
    int cnt=0;
    REP(i,2){
        if(S[i] == 'R' && S[i+1]=='R') cnt++;
    }
    cout << cnt+1 << endl;
    return 0;
}