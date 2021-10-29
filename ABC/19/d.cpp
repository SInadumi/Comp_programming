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
// 木の直径 : 木に存在する2つのノードの最大距離
int main() {
    // cin.tie(0); 
    /* 
    cinとcoutは非同期処理となるため，応答側からの入力を待たずして
    こちらから出力するようになる．
    おそらく，応答側の速度のほうが遅いため，プログラム側は入力待ちの状態が続き，TLEとなった．
    */
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    int u = 1, tmp = 0;
    // 1->u
    EFOR(i,2,n){
        int dist;
        cout << "? " << 1 << " " << i << endl;
        cin >> dist;
        if(chmax(tmp,dist)) u = i;
    }
    int ans = 0;
    EFOR(i,1,n){
        if(i == u) continue;
        int dist;
        cout << "? " << u << " " << i << endl;
        cin >> dist;
        chmax(ans, dist);
    }
    cout << "! " << ans << endl;
    return 0;
}