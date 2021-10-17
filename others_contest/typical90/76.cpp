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
    ll n; cin >> n;
    vector<ll> t(2*n+1,0), a(n);
    REP(i,n){
        cin >> a[i];
        t[i+1] = t[i] + a[i];
    }
    EFOR(i,n+1,2*n){
        t[i] = t[i-1] + a[i-n-1];
    }
    if(t[n]%10 != 0){
        cout << "No" << endl;
        return 0;
    }
    EFOR(i,1,n){
        ll c = t[i] + t[n]/10;
        int it = lower_bound(ALL(t), c) - t.begin();
        if(t[it] == c){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}