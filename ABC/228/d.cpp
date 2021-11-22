// #include <bits/stdc++.h>
// using namespace std;
 
// constexpr int SIZE = 1 << 20;
// constexpr int MASK = SIZE - 1;
 
// int main() {
//     int q;
//     cin >> q;
//     vector<int> parent(SIZE);
//     vector<long long> value(SIZE, -1);
//     iota(begin(parent), end(parent), 0);
//     auto find = [&](auto&& self, int x) -> int {
//         if (parent[x] == x) {
//             return x;
//         } else {
//             int tmp = self(self, parent[x]);
//             return parent[x] = tmp;
//         }
//     };
//     while (q--) {
//         int t;
//         long long x;
//         cin >> t >> x;
//         if (t == 1) {
//             int i = find(find, x & MASK);
//             value[i] = x;
//             parent[i] = find(find, (i + 1) & MASK);
//         } else {
//             cout << value[x & MASK] << '\n';
//         }
//     }
// }
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
const ll n = 1048576;
int solve(vector<ll> &p, int j){
    if(p[j] == j) return j;
    else{
        p[j] = solve(p, p[j]);
        return p[j];
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll q; cin >> q;
    vector<ll> a(n, -1);
    vector<ll> p(n);
    iota(ALL(p), 0);
    REP(i,q){
        int t; ll x; cin >> t >> x;
        if(t == 1){
            int j = solve(p, x % n);
            a[j] = x;
            p[j] = solve(p, (j + 1) % n);
        }else{
            cout << a[x%n] << endl;
        }
    }
    return 0;
}