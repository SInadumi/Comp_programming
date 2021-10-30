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
bool cmp(const pair<ll,ll>& a, pair<ll,ll>& b){
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first > b.first;
    }
    return true;
}
// 2部最大マッチングでも解ける
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    vector<P> red(n),blue(n);
    REP(i,n) cin >> red[i].first >> red[i].second;
    REP(i,n) cin >> blue[i].first >> blue[i].second;
    sort(ALL(blue));
    int ans = 0;
    FORE(tb, blue){
        vector<P> t;
        vector<P> bag;
        FORE(tr, red){
            if(tr.first <= tb.first && tr.second <= tb.second){
                t.push_back(tr);
            }else{
                bag.push_back(tr);
            }
        }
        if(SIZE(t) == 0) continue;
        sort(ALL(t), cmp);
        FOR(i,1,SIZE(t)) bag.push_back(t[i]);
        red = bag;
    }
    cout << n - SIZE(red) << endl;
    return 0;
}