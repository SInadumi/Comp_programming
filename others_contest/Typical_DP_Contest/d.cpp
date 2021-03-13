#include <bits/stdc++.h>
using namespace std;

using ll = long long;

template<typename T>
std::vector<T> table(int n, T v) { return std::vector<T>(n, v); }

template <class... Args>
auto table(int n, Args... args) {
    auto val = table(args...);
    return std::vector<decltype(val)>(n, std::move(val));
}
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
#define MOD 1000000007
ll power(ll x, ll y, ll mod = MOD){
    if(x == 0) return 0;
    if(y == 0) return 1;
    if(y % 2 == 0) return power(x *x % mod, y/2, mod);
    else return x * power(x, y-1, mod) % mod;
}

int main(void){
    int n; 
    unsigned long long d, ans = 0;
    cin >> n >> d;
    vector<int> cnt(3);
    int index = 0;
    for(int i : {2, 3, 5}){
        int c = 0;
        while(d % i == 0){
            d /= i;
            c++;
        }
        cnt[index++] = c;
    }
    if(d != 1) {cout << 0 << endl; return 0;}
    constexpr int dx[6] = {0, 1, 0, 2, 0, 1};
    constexpr int dy[6] = {0, 0, 1, 0, 0, 1};
    constexpr int dz[6] = {0, 0, 0, 0, 1, 0};
    auto dp = table(cnt[0] + 1, cnt[1] + 1, cnt[2] + 1, 0.0);
    dp[0][0][0] = 1;
    REP(t,n){
        auto tmp = table(cnt[0] + 1, cnt[1] + 1, cnt[2] + 1, 0.0);
    EFOR(i,0,cnt[0]){
        EFOR(j,0,cnt[1]){
            EFOR(k,0,cnt[2]){
                REP(x,6){
                    int xx = min(cnt[0], i+dx[x]);
                    int yy = min(cnt[1], j+dy[x]);
                    int zz = min(cnt[2], k+dz[x]);
                    tmp[xx][yy][zz] += dp[i][j][k] / 6;
                }
            }
        }
    }
    dp = move(tmp);
    }
    cout << fixed << setprecision(15) << dp[cnt[0]][cnt[1]][cnt[2]] << endl;

    return 0;
}