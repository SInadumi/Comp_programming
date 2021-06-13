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
vector<pair<ll,ll>> run_length_encode(vector<ll> s){
    int size = s.size();
    vector<pair<ll,ll>> ret;
    for(int i = 0; i < size;){
        int j = i+1;
        while(j < size && s[j-1] == s[j]-1) j++;
        ret.push_back({s[i], j-i});
        i = j;
    }
    return ret;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n,q; cin >> n >> q;
    vector<ll> a(n), t(n);
    REP(i,n) cin >> a[i];
    REP(i,n) t[i] = a[i] - (i+1);
    REP(i,q){
        ll k; cin >> k;
        ll index = lower_bound(ALL(t),k) - t.begin();
        if(index == n){
            cout << a[n-1] + (k - t[n-1]) << endl;
        }else{
            cout << a[index] - 1 + (k-t[index]) << endl;
        }
    }
    return 0;
}