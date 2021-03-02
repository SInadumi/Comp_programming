#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF
ll solve(string s){
    vector<ll> c(10);
    //REP(i,10) cards[i] = i;
    iota(c.begin(), c.end(), 0);
    for(char it : s) c[it - '0'] *= 10;
    // ll ret = 0;
    // for(auto it : cards) ret += it;
    // return ret;
    return accumulate(c.begin(), c.end(), 0LL);
}

int main(void){
    ll k, all = 0, win = 0;
    string s,t;
    cin >> k >> s >> t;
    vector<ll> cards(10, k);

    REP(i,5){
        cards[s[i] - '0']--; cards[t[i]-'0']--;
    }
    FOR(i,1,10){
        FOR(j,1,10){
            //if(cards[i] == 0 || cards[j] == 0) continue;
            s.back() = '0' + i;
            t.back() = '0' + j;
            if(solve(s) <= solve(t)) continue;
            win += cards[i] * (cards[j] - (i == j));
        }
    }

    all = 9 * k - 8;
    cout << setprecision(15) << double(win) / all / (all - 1) << endl;


    return 0;
}