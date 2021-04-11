#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define for(i,a,b) for(int i=(a);i<(b);++i)
#define efor(i,a,b) for(int i=(a);i<=(b);++i)
#define rep(i, n) FOR(i,0,n)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin,(x).end()
#define size(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    cout << n-1 << endl;
    return 0;
}