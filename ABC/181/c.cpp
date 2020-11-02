#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

int main(void){
    int n;
    cin >> n;
    vector<P> p(n+1);
    vector<vector<ll>> diff(n+1,vector<ll>(n+1, -1));
    REP(i,n){
        cin >> p[i].first >> p[i].second;
    }

    REP(i,n){
        REP(j,n){
            REP(k,n){
                if(i == j || j == k || i == k) continue;
                long double dx1 = p[j].first - p[i].first;
                long double dy1 = p[j].second - p[i].second;
                long double dx2 = p[i].first - p[k].first;
                long double dy2 = p[i].second - p[k].second;
                
                if(dx1*dy2 == dx2*dy1){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }

    }
    cout << "No" << endl;
    return 0;
}