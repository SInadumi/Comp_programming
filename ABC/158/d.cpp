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
int main(void){
    string s; cin >> s;
    int q; cin >> q;
    deque<char> ans;
    bool flip = false;
    for(char i : s) ans.push_back(i);

    REP(i,q){
        int first; cin >> first;
        if(first == 1){
            flip = !flip;
        }else{
            int second; cin >> second;
            char c; cin >> c;
            if(flip) second = 3-second;
            if(second == 1){
                ans.push_front(c);
            }else{
                ans.push_back(c);
            }
        }
    }
    if(flip) reverse(ans.begin(),ans.end());
    for(char i : ans) cout << i; 
    cout << endl;
    return 0;
}