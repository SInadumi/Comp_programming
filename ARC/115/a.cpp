#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
 
ll combo(int n,int r){
    ll ans = 1;
    for (int i = n; i > n - r; --i) {
        ans = ans*i;
    }
    for (int i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

int main() {

    ll n,m;
    cin >> n >> m;
    int odd = 0, even = 0;
    REP(i,n){
        string n;
        cin >> n;
        int tmp = 0;
        for(auto it:n){
            if(it == '1') tmp++;
        }
        if(tmp%2 == 0) even++;
        else odd++; 
    }

    cout << combo(n,2) - combo(even,2) - combo(odd,2) << endl;

    return 0;
}