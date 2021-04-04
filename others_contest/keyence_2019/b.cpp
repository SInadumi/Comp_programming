#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2e10
#define MOD 1000000007

int main() {

    string s; cin >> s;
    int ans = 0;
    string t = "keyence";
    int index = 0;
    int i = 0;
    if(s == t){
        cout << "YES" << endl;
        return 0;
    }
    // 切り取る箇所の決めうち
    REP(i,s.size()){
        FOR(j,i,s.size()){
            string tmp = "";
            REP(k,s.size()){
                // i:begin j:end
                if(i <= k && k <= j) continue;
                else tmp.push_back(s[k]);
            }
            if(tmp == t){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;

}