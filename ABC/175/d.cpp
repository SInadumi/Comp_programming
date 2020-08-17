#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)

/*
類ABC167 D Telepoter
複数の閉経路の周期性から解く　O(N^2)
解説: https://atcoder.jp/contests/abc175/editorial/53
*/

int main(void){
    ll N,K;
    cin >> N >> K;
    vector<ll> P(N),C(N);

    REP(i,N){
        cin >> P[i];
        P[i]--;
    }
    REP(i,N) cin >> C[i];

    ll ans = -INF;

    REP(i,N){
        int v = i;
        ll cycle_sum = 0;
        ll cycle_cnt = 0;
        // 複数巡回路のうち，巡回して最大となる巡回路を見つける
        while(true){
            cycle_sum += C[v];
            cycle_cnt ++;
            v = P[v];
            if(v == i) break;
        }
        ll path = 0,cnt = 0;
        // cycle_sum > 0:Kが許す限り巡回する
        // cycle_sum <= 0:サイクルの余りの部分をすべて試した時の最大値    
        while(true){
            cnt ++;
            path += C[v];
            if(cnt > K) break;
            int num = (K - cnt)/cycle_cnt;
            ll score = path + max(0ll,cycle_sum) * num;
            if(ans < score) ans = score;
            v = P[v];
            if(v == i) break;
        }
    }

    cout << ans << endl;

    return 0;
}