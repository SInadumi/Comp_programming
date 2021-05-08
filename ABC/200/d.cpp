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
    vector<int> a(n);
    REP(i,n){
        int t; cin >> t;
        a[i] = t%200;
    }
    vector<vector<int>> b(210,vector<int>(0));
    REP(bit,1 << min(n,8)){
        vector<int> c;
        int tot = 0;
        REP(i,min(n,8)){
            if((bit >> i) & 1){
                c.push_back(i+1);
                tot += a[i];
                tot %= 200;
            }
        }
        if(b[tot].size() != 0){
            cout << "Yes" << endl;
            cout << SIZE(b[tot]) << ' ';
            FORE(it,b[tot]){
                cout << it << ' ';
            }
            cout << endl;
            cout << SIZE(c) << ' ';
            FORE(it, c){
                cout << it << ' ';
            }
            cout << endl;
            return 0;
        }else{
            b[tot] = c;
        }

    }
    cout << "No" << endl;
    return 0;
}