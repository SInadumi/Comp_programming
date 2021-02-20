#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

string f(string x){
    sort(x.begin(), x.end());
    string g1 = x;
    sort(x.begin(), x.end(), greater<char>());
    string g2  =x;
    ll ret = stoi(g2) - stoi(g1);
    return to_string(ret);
}

int main(void){
    string n, a, a1;
    int k;
    cin >> n >> k;
    a = n;
    a1 = f(a);
    while(k > 0){
        if(a.compare(a1) == 0) break;
        a = a1;
        a1 = f(a); 
        k--;
    }
    cout << a << endl;
    return 0;
}