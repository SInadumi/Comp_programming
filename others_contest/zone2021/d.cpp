#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,I) for(const auto &(i):(I))
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    //cout << std::fixed << std::setprecision(15);
    string s; cin >> s;
    deque<char> t;
    bool rev = false;
    REP(i,s.size()){
        if(s[i] == 'R'){
            rev ^= 1;
            continue;
        }
        if(rev){
            t.push_front(s[i]);
            if(t.size() == 1) continue;
            if(t[0] == t[1]){
                t.pop_front();t.pop_front();
            }
        }else{
            t.push_back(s[i]);
            if(t.size() == 1) continue;
            if(t[t.size()-1] == t[t.size()-2]){
                t.pop_back();t.pop_back();
            }
        }
    }
    if(rev) reverse(ALL(t));
    REP(i,SIZE(t)){
        cout << t[i];
    }
    cout << endl;
    return 0;
}