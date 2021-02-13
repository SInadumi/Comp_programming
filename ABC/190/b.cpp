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
    int n,s,d;
    bool flag = false;
    cin >> n >> s >> d;
    vector<ll> x(n+10), y(n+10);
    REP(i,n) cin >> x[i] >> y[i];
    REP(i,n){
        if(x[i] < s && y[i] > d){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}