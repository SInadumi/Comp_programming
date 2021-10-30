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
int dh[8] = {0,0,1,1,1,-1,-1,-1};
int dw[8] = {1,-1,0,1,-1,0,1,-1};
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int h,w; cin >> h >> w;
    vector<string> s(h);
    REP(i,h) cin >> s[i];
    REP(i,h){
        REP(j,w){
            int ans = 0;
            if(s[i][j] == '#'){
                cout << '#';
                continue;
            }
            REP(k,8){
                int vh = i + dh[k], vw = j + dw[k];
                if(vh < 0 || vw < 0 || vh >= h || vw >= w) continue;
                if(s[vh][vw] == '#') ans++;
            }
            cout << ans;
        }
        cout << endl;
    }
    return 0;
}