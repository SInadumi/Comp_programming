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
    string s1,s2,s3; cin >> s1 >> s2 >> s3;
    string t = s1+s2+s3;
    vector<string> s(4);
    s[0] = "ABC";
    s[1] = "ARC";
    s[2] = "AGC";
    s[3] = "AHC";
    REP(i,4){
        if(t.find(s[i]) == string::npos){
            cout << s[i] << endl;
            break;
        }
    }
    // REP(i,4){
    //     REP(j,4){
    //         REP(k,4){
    //             if(i == j || j == k || k == i) continue;
    //             if(s[i] == s1 && s[j] == s2)
    //         }
    //     }
    // }
    return 0;
}