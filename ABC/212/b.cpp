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
    string x;
    cin >> x;
    bool is_weak1 = true, is_weak2 = true;
    REP(i,4){
        if(i == 0) continue;
        if(x[i] - '0' != x[i-1] - '0') is_weak1 = false;
        if(x[i-1] - '0' != 9){
            if(x[i] - '0' != x[i-1] - '0' + 1) is_weak2 = false;
        }else{
            if(x[i] - '0' != 0) is_weak2 = false;
        }
    }
    if(is_weak1 || is_weak2) {
        cout << "Weak" << endl;
    }else{
        cout << "Strong" << endl;
    }

    return 0;
}