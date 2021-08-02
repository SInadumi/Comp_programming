
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
    vector<int> h(n+1);
    REP(i,n){
        cin >> h[i];
    }
    int ma = h[0], ans = 0;
    EFOR(i,1,n){
        ma = max(ma,h[i]);
        if(h[i] == 0){
            ans += ma;
            ma = 0;
            continue;
        }
        if(h[i] < h[i-1]){
            ans += h[i-1]  - h[i];
            ma = h[i];
        }
    }
    ans += ma;
    cout << ans << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// typedef pair<ll,ll> P;
// #define FOR(i,a,b) for(int i=(a);i<(b);++i)
// #define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
// #define REP(i, n) FOR(i,0,n)
// #define INF 2e10
// #define MOD 1000000007


// int main() {

//     int n; cin >> n;
//     vector<int> h(n);
//     REP(i,n) cin >> h[i];
//     int ans = 0;
    
//     while(1){
//         bool is_zero = true;
//         REP(i,n){
//             if(h[i] > 0) is_zero = false;
//         }
//         if(is_zero) break;
//         int i = 0;
//         while(i < n){
//             if(h[i] == 0) i++;
//             else{
//                 ans++;
//                 while(i < n && h[i] > 0){
//                     h[i]--;
//                     i++;
//                 }
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;

// }