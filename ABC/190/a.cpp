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
    int a,b,c;
    cin >> a >> b >> c;
    if(!c){
        if(a > b) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }else{
        if(a >= b) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }
    return 0;
}