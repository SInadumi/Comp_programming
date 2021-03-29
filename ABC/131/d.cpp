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

    ll n; cin >> n;
    vector<P> job(n);
    REP(i,n) cin >> job[i].first >> job[i].second;
    sort(job.begin(),job.end(),cmp);
    ll time = 0;
    REP(i,n){
        time += job[i].first;
        if(time > job[i].second) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}