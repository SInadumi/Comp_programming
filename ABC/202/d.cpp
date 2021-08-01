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
ll combo(ll n,ll r,ll mod = MOD){
    if(r == 0 || n == r) return 1;
    ll ans = 1;
    int j = 1;
    for (int i = n; i > n - r; --i) {
        ans = ans*i;
        if(j < r + 1){
            ans = ans / j;
            j++;
        }
    }
    return ans;
}

// 先頭に'b'を含む事が可能か確かめる
// 具体的には　(a+b-1)c(b) > k であるかを確認
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll a,b,k; cin >> a >> b >> k;
    string ans;
    int size = a+b;
    REP(i,size){
        ll t = combo(a+b-1,b);
        if(a == 0){
            ans += 'b';
            b--;
            continue;
        }
        if(k <= t){
            ans += 'a';
            a--;
        }else{
            ans += 'b';
            b--;
            k -= t;
        }
    }
    cout << ans << endl;
    return 0;
}
