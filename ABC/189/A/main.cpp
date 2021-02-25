#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(){

    string c;
    cin >> c;
    if(c[0] == c[1] && c[0] == c[2] && c[1] == c[2]){
        cout << "Won" << endl;
    }else{
        cout << "Lost" << endl;
    }

    return 0;
}
