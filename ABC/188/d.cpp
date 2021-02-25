#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long int ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

// 累積和　別解(座標圧縮によるいもす法)
int main(){

    ll n,c,ans = 0, now = 0, day = 0;
    cin >> n >> c;
    vector<P> event;
    // a-1 -> a の時は+c料金が上がる
    // b -> b+1の時は-c料金が下がる
    // これらを時系列順にソートする
    REP(i,n){
        ll a,b,c;
        cin >> a >> b >> c;
        event.emplace_back(P(a-1,c)); // push_backよりベター
        event.emplace_back(P(b,-c));
    }
    sort(event.begin(), event.end());

    for(auto it : event){
        if(it.first != day){
            ans += min(now, c) * (it.first - day);
            day = it.first;
        }
        now += it.second; 

    }
    cout << ans << endl;
    return 0;
}