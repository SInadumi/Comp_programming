#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 2073741824
#define PI acos(-1)
// https://ameblo.jp/shockyeah/entry-10980569328.html 
int main() {
    double n,x,y,x2,y2;
    cin >> n >> x >> y >> x2 >> y2;
    double cx,cy,r;
    r = pow((x-x2),2) + pow((y - y2),2);
    r = sqrt(r)/2;
    cx = x+(x2 - x)/2;
    cy = y+(y2 - y)/2;
    double ax,ay,angle;
    angle = 2*PI/n + atan2((cy-y),(cx-x));
    ax = cx - (r * cos(angle));
    ay = cy - (r * sin(angle));
    cout << fixed << setprecision(15) << ax << ' '<< ay << endl;
    return 0;
}