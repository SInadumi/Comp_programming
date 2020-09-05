#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)
 
int main(void){
    string S,T;
    cin >> S >> T;
    int ans = 0;
    for(int i=0; i<=S.size()-T.size(); i++){
        int cnt = 0;
        FOR(j,0,T.size()){
            if(S[i+j] == T[j]) cnt++;
        }
        ans = max(ans,cnt);
    }
    cout << T.size()-ans << endl;
    return 0;
}