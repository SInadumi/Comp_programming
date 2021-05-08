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
    string s; cin >> s;
    string s1 = s.substr(0,n), s2 = s.substr(n);
    int q; cin >> q;
    bool flip = false;
    REP(i,q){
        int t,a,b; cin >> t >> a >> b;
        if(t == 1){
            a--, b--;
            if(a < n && b < n){
                if(!flip) swap(s1[a], s1[b]);
                else swap(s2[a], s2[b]);
            }else if(a >= n && b >= n){
                if(!flip) swap(s2[a-n], s2[b-n]);
                else swap(s1[a-n], s1[b-n]);
            }else{
                if(!flip) swap(s1[a], s2[b-n]);
                else swap(s2[a], s1[b-n]);
            }
        }else{
            if(flip) flip = false;
            else flip = true;
        }
    }
    if(flip){
        s = s2 + s1;
    }else{
        s = s1 + s2;
    }
    cout << s << endl;
    return 0;
}