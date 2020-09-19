#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1e9
const int MOD = 1000000007;
typedef pair<ll,ll> P;

int main(void){
    // tot -> 周期に入る前の合計
    ll n, x, m, len = 0, tot = 0,ans = 0;
    cin >> n >> x >> m;
    vector<ll> id(m,-1);
    vector<ll> a;
    
    while(id[x] == -1){
        a.push_back(x);
        id[x] = len;
        len++;
        tot += x;
        x = (x*x) % m;
    }

    ll c = len - id[x]; //cycle数
    ll s = 0;       // cycleの合計値
    FOR(i,id[x],len) s += a[i];
    if(n <= len){
        REP(i,n) ans += a[i];
    }else{
        ans += tot;
        n -= len;
        ans += s * (n / c);
        n %= c;
        REP(i,n) ans += a[id[x]+i];
    }
    cout << ans << endl;
}

// Danger: RE Code!
/*int main(void){
    ll n,x,m, ans = 0,cycle_pre = 1,i = 0;
    cin >> n >> x >> m;
    
    vector<ll> p(m,-1);
    p[i++] = x;
    ans += x;

    while(i < n){
        ll res = pow(p[i-1],2);
        res %= m;
        auto chk = find(p.begin(),p.end(),res);

        if(chk == p.end()){
            ans += res;
        }else{
            cycle_pre = distance(p.begin(),chk);
            break;
        }
        p[i++] = res;
    }
    
    n -= cycle_pre;
    ll cycle = n / (i-cycle_pre), mcycle = n % (i-cycle_pre);
    p.erase(p.begin(),p.begin()+cycle_pre);
    p.erase(p.begin()+(i-cycle_pre),p.end());
    ans -= accumulate(p.begin(),p.end(),0);
    ans += accumulate(p.begin(),p.end(),0) * cycle;
    

    REP(j,mcycle){
        ans += p[j];
    }
    
    cout << ans << endl;
    return 0;
}
*/