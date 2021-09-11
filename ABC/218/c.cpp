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
    int n; cin >> n;
    vector<vector<char>> s(n, vector<char>(n)), t(n, vector<char>(n));
    int a = 0,b = 0;
    REP(i,n)REP(j,n){
        cin >> s[i][j];
        if(s[i][j] == '#') a++;
    }
    REP(i,n)REP(j,n){
        cin >> t[i][j];
        if(t[i][j] == '#') b++;
    }
    if(a != b ){
        cout << "No" << endl;
        return 0;
    }
    bool can = false;
    REP(i,4){
        vector<vector<char>> ss(n+100, vector<char>(n+100));
        REP(j,n){
            REP(k,n){
                ss[j][k] = s[n-1-k][j];
            }
        }
        vector<P> cmps;
        REP(j,n){
            REP(k,n){
                if(ss[j][k] == '#') cmps.push_back({j,k});
            }
        }
        int idx = 0;
        int difx=0,dify = 0;
        bool can2 = true;
        REP(j,n){
            REP(k,n){
                if(t[j][k] != '#') continue;
                if(idx == 0){
                    difx = abs(cmps[idx].first - j);
                    dify = abs(cmps[idx].second - k);
                    idx++;
                    continue;
                }    
                if(difx != abs(cmps[idx].first - j) || dify != abs(cmps[idx].second - k)){
                    can2 = false;
                }
                idx++;
            }
        }
        if(can2) can = true;

        s = ss;
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}