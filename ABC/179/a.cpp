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
    string s;
    cin >> s;
    if(s[s.length()-1] == 's'){
        cout << s << "es" << endl; 
    }else{
        cout << s << "s" << endl;
    }
    return 0;
}