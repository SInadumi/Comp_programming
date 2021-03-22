#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
// http://www.codelogy.org/entry/2008/01/03/180100 : 素因数の数をエラトステネスの篩で数える
vector<int> prime_factor(int n){
    vector<int> res(n+1,1);
    //iota(res.begin(), res.end(),0); 
    for(int i = 2; i*i <= n; i++){
        if(res[i] == 1){
            for(int j = 2; i*j <= n; j++){
                res[i*j] = res[i] + res[j];
            }
        }
    }
    return res;
}
int main() {

    int n; cin >> n;
    vector<int> prime = prime_factor(n);
    cout << 1 << ' ';
    EFOR(i,2,n){
        cout << prime[i] + 1 << ' ';
    }
    cout <<endl;

    return 0;
}