#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

int main(void){
    int a,b,w;
    cin >> a >> b >> w; 
    int max_num = 0, min_num = 1e9;
    w *= 1000;
    FOR(i,1,1000010){
        if(a*i <= w && b*i >= w){
            max_num = max(max_num,i);
            min_num = min(min_num,i);
        }
    }
    if(max_num != 0) cout << min_num << ' ' << max_num << endl;
    else cout << "UNSATISFIABLE" << endl;
    return 0;
}