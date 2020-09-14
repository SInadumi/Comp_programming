#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1e12

int main(void){
    ll N,ans = -INF;
    cin >> N;
    ll zmax=-INF,zmin=INF,wmax=-INF,wmin=INF;
    REP(i,N){
        ll x,y;
        cin >> x >> y;
        zmax = max(zmax,x+y);
        zmin = min(zmin,x+y);
        wmax = max(wmax,x-y);
        wmin = min(wmin,x-y);
    }
    ans = max({ans,zmax-zmin,wmax-wmin});
    cout << ans << endl;
    return 0;
}
/*
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
 
int main() {
  int n;
  cin >> n;
 
  ll zmax = 0, zmin = 2 * 1e9, wmax = -1e9, wmin = 1e9;
  ll x, y;
  rep(i, n) {
    cin >> x >> y;
    zmax = max(zmax, x + y);
    zmin = min(zmin, x + y);
    wmax = max(wmax, x - y);
    wmin = min(wmin, x - y);
  }
 
  cout << max(zmax - zmin, wmax - wmin) << endl;
  
  return 0;
}
*/