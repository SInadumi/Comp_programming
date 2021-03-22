#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
int r,s,p;
tuple<int,char> solve(char now,char prev, char to){
    int tmp1=0;
    char tmp2=0;
    if(prev != 0){
        if(now == 'r'){
            if(prev != 'p') tmp1 = p,tmp2 = 'p';  
            else{
                if(to == 'p' || to == 'r') tmp2 = 'r';
                //else if(to == 'p') tmp2 = 's';
                else tmp2 = 's';
            }
        }
        else if(now == 's'){
            if(prev != 'r') tmp1 = r, tmp2 = 'r';
            else{
                if(to == 's' || to == 'p') tmp2 = 'p';
                else tmp2 = 's';
            }
        }
        else{
            if(prev != 's') tmp1 = s, tmp2 = 's';
            else{
                if(to == 'p' || to == 'r') tmp2 = 'r';
                else tmp2 = 'p';
            }
        } 
    }else{
        if(now == 'r') tmp1 = p, tmp2 = 'p';
        else if(now == 's') tmp1 = r, tmp2 = 'r';
        else tmp1 = s, tmp2 = 's';
    }
    return make_tuple(tmp1,tmp2);
}
int main() {
    int n,k; cin >> n >> k;
    cin >> r >> s >> p;
    string t; cin >> t;
    deque<char> store;
    int ans = 0;
    REP(i,n){
        char prev = 0;
        char to;
        if(i+k > t.size()) to = 0;
        else to = t[i+k];
        int ret1;
        char ret2;
        if(i >= k){
            prev = store.front(); store.pop_front();
            tie(ret1, ret2) = solve(t[i], prev, to);
            
        }else{
            tie(ret1, ret2) = solve(t[i], prev, to);
        }
        ans += ret1;
        store.push_back(ret2);
    }
    cout << ans << endl;
    return 0;
}