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
    string a;
    int f;
    cin >> a;
    if(a[0] == 'a' && a.length() == 1){
        cout << "-1" << endl;
    }else{
        cout << "a" << endl;
    }
    return 0;
}