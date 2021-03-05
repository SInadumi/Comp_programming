#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}
// 階乗列挙　: next_permutation
// https://note.com/memenekokaburi/n/nf0201d6002cd
int main(void){
    int n,ans = 0;
    cin >> n;
    vector<int> p(n),q(n),retu(n);
    REP(i,n) cin >> p[i];
    REP(i,n) cin >> q[i],retu[i] = i+1;
    map<vector<int>,int> maps;
    do{
        maps[retu] = maps.size();
    }while(next_permutation(retu.begin(),retu.end()));
    cout << abs(maps[p] - maps[q]) << endl;
    return 0;
}