#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2e10
bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
    return true;
}
int main() {
    cout << fixed << setprecision(15);
    ll w,h,x,y; cin >> w >> h >> x >> y;

    cout << (long double)w*h/2;

    if((double)w/2 == (double)x && (double)h/2 == (double)y){
        cout << ' ' << 1 << endl;
    }else{
        cout << ' ' << 0 << endl;
    }

    return 0;
}