#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(){

    int n, left = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];

    REP(i,n){
        int tmp = 0, low = 0;
        left = i;
        low = a[left];

        FOR(right, left,n){
            low = min(low, a[right]);
            ans = max(ans, low*(right - left + 1));
        }
    }
    cout << ans << endl;

    return 0;
}
