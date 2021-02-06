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
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    if(v * t <= d && v * s >= d){
            cout << "No" << endl;

    }else{
        cout << "Yes" << endl;
    }
    return 0;
}