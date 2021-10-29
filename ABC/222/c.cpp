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

bool cmp(const pair<int,int>& a, pair<int,int>& b){
    if(a.first != b.first){
        return a.first > b.first;
    }else{
        return a.second < b.second;
    }
    return true;
}

int solve(vector<vector<char>> &a, int i, int j, int k){
    int ret = 0;
    if(a[i][j] == 'G' && a[i][k] == 'C') ret = 1;
    if(a[i][j] == 'C' && a[i][k] == 'P') ret = 1;
    if(a[i][j] == 'P' && a[i][k] == 'G') ret = 1;
    if(a[i][k] == 'G' && a[i][j] == 'C') ret = -1;
    if(a[i][k] == 'C' && a[i][j] == 'P') ret = -1;
    if(a[i][k] == 'P' && a[i][j] == 'G') ret = -1;
    return ret;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<vector<char>> a(m, vector<char>(2*n));
    REP(i,2*n)REP(j,m) cin >> a[j][i];
    vector<pair<int,int>> rank(2*n);
    REP(i,2*n) rank[i].first = 0, rank[i].second = i+1;
    REP(i,m){
        for(int j = 0; j < 2*n; j += 2){
            // 2k-1(j)が勝つ場合
            if(solve(a,i,rank[j].second - 1, rank[j+1].second - 1) == 1){
                rank[j].first++;
            }
            // 2k(j+1)が勝つ場合
            else if(solve(a,i,rank[j].second - 1, rank[j+1].second - 1) == -1){
                rank[j+1].first++;
            }
        }
        sort(ALL(rank), cmp);
    }
    REP(i,2*n){
        cout << rank[i].second << endl;
    }
    return 0;
}