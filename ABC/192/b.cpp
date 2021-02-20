#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(void){
    bool ans = true;
    string s;
    cin >> s;
    REP(i,s.length()){
        if(i%2 == 1){
            if(s[i] >= 'A' && s[i] <= 'Z') ans = true;
            else{
                ans = false;
                break;
            }
        }else{
            if(s[i] >= 'a' && s[i] <= 'z') ans = true;
            else{
                ans = false;
                break;
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}