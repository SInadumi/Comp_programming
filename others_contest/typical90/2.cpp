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
 
// bit全探索
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    vector<string> ans;
    FOR(i,0,1<<n){
        string s;
        int le = 0, ri = 0;
        bool can = true;
        REP(j,n){
            if(ri > le){
                can = false;
                break;
            }
            if((i>>j) & 1){
                s.push_back('(');
                le++;
            }else{
                s.push_back(')');
                ri++;
            }
        }
        if(ri > (n/2) || le > (n/2)) can = false;
        if(!can) continue;
        ans.push_back(s);
    }
    sort(ALL(ans));
    FORE(i,ans) cout << i << endl;
    return 0;
}