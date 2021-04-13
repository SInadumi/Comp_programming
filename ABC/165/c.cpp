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

int n,m,q,ans=0;
vector<int> a(51),b(50),c(50),d(50);
vector<int> A(11);
void DFS(int x){
    if(x == n){
        int tot = 0;
        REP(i,q){
            if(A[b[i]] - A[a[i]] == c[i]) tot += d[i];
        }
        ans = max(ans, tot);
        return;
    }
    EFOR(i,A[x],m){
        A[x+1] = i;
        DFS(x+1);
    }
    return;
}
int main(void){
    cin >> n >> m >> q;
    REP(i,q) cin >> a[i] >> b[i] >> c[i] >> d[i];
    A[0] = 1;
    DFS(0);
    cout << ans << endl;
    return 0;
}