#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

const long double PI = (acos(-1));
const long double eps = 0.0000000001;
int main() {

    int a,b,x; cin >> a >> b >> x;
    long double ans=0,l = 0, r = PI/2.0;
    REP(i,100000){
        long double mid = (l+r)/2.0;
        long double tmp = 0;
        if(mid > PI/2.0 - eps){
            tmp = 0.0;
        }else{
            if(a*tan(mid) <= b){
                tmp = a*a*b - a*a*a*tan(mid)/2.0;
            }else{
                tmp = b*b / tan(mid)*a / 2.0;
            }
        }
        if(tmp < x) r = mid;
        else l = mid;
    }
    cout << fixed << setprecision(10) << r / PI * 180 << endl;

    return 0;
}