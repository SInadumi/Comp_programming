#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1e9
const int MOD = 1000000007;
typedef pair<ll,ll> P;

int main(void){
    int n,cnt = 0;
    bool ok = false;
    cin >> n;
    int d[110][2];
    REP(i,n){
        int d1,d2;
        cin >> d1;
        cin >> d2;
        if(d1 == d2) cnt++;
        else cnt = 0;

        if(cnt == 3) ok = true;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}