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
bool cmp(const pair<int,pair<ll,ll>>& a, const pair<int,pair<ll,ll>>& b){
    if(a.second.first != b.second.first){
        return a.second.first < b.second.first;
    }else{
        return a.second.second < b.second.second;
    }
    return true;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n,m; cin >> n >> m;
    vector<pair<int,pair<ll,ll>>> py(m);
    REP(i,m){
        ll p,y; cin >> p >> y;
        py[i].first = i;
        py[i].second.first = p;
        py[i].second.second = y;
    }
    sort(ALL(py),cmp);
    vector<string> ans(m);
    int num = 1;

    REP(i,SIZE(py)){

        char buf[13];
        sprintf(buf, "%06d%06d", py[i].second.first, num);
        ans[py[i].first] = string(buf);

        // string t = to_string(py[i].second.first);
        // FOR(j,SIZE(t),6){
        //     t.insert(0,"0");
        // }

        // string t2 = to_string(num);
        // FOR(j,SIZE(t2),6){
        //     t2.insert(0,"0");
        // }
        // ans[py[i].first] = t + t2;
        
        if(i == SIZE(py)-1) continue;
        if(py[i].second.first == py[i+1].second.first) num++;
        else num = 1;
    }

    FORE(i,ans){
        cout << i << endl;
    }
    return 0;
}