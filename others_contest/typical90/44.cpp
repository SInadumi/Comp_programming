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

//　下 0 上 1 左 2 右 3
int dx[4] = {0,1,-1,0};
int dy[4] = {1,0,0,-1};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,q; cin >> n >> q;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    int pivot = 0;
    REP(i,q){
        int t, x, y; cin >> t >> x >> y;
        x--, y--;
        x = (x + n - pivot )%n;
        y = (y + n - pivot )%n;
        if(t == 1){
            swap(a[x],a[y]);
        }else if(t == 2){
            pivot++;
            pivot %= n;
        }else{
            cout << a[x] << endl;
        }
    }
    return 0;
}