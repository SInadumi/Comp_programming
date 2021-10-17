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

vector<ll> s(21);

// ABC 186 C , ABC 171 C, ABC 105 C

ll _8to10(string n){
    ll ret = 0;
    REP(i,SIZE(n)){
        ret = 8 * ret + int(n[i] - '0');
    }
    return ret;
}

string _10to9(ll n){
    string ret;
    if(n == 0) return "0";
    while(n > 0){
        ret = (char)(n%9 + '0') + ret;
        n /= 9; 
    }
    return ret;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    string n; int k; cin >> n >> k;
    REP(i,k){
        n = _10to9(_8to10(n));
        REP(i,SIZE(n)){
            if(n[i] == '8'){
                n[i] = '5';
            }
        }
    }
    cout << n << endl;
    return 0;
}