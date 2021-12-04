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
    string s; cin >> s;
    bool ans = true;
    if(SIZE(s) == 1){
        cout << "Yes" << endl;
        return 0;
    }else if(SIZE(s) == 2){
        if(s[0] == 'o' && s[1] == 'o') cout << "No" << endl;
        else cout << "Yes" << endl;
        return 0;
    }
    char p1 = s[0], p2 = s[1];
    FOR(i,2,SIZE(s)){
        if(p1 == 'o' && p2 == 'x' || p1 == 'x' && p2 == 'o'){
            if(s[i] != 'x') ans = false;
        }else if(p1 == 'x' && p2 == 'x'){
            if(s[i] != 'o') ans = false;
        }else{
            ans = false;
        }
        p1 = p2, p2 = s[i];
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}