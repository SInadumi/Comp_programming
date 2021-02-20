#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1e18
string x;
ll m;
unsigned long long pre = 0;
bool chk(ll d){
    vector<ll> y;
    ll tmp = m;
    while(tmp > 0){
        y.push_back(tmp % d);
        tmp /= d;
    }
    reverse(y.begin(), y.end());

    if(x.size() < y.size()) return true;
    else if(x.size() > y.size()) return false;
    REP(i,x.size()){
        ll xx = x[i] - '0';
        ll yy = y[i];
        if(xx == yy) continue;
        else if(xx < yy) return true;
        else return false;
    }
    return true;
}

int main(void){
    int d = -1;
    cin >> x >> m;

	if (x.length() == 1) {
		ll X = stoll(x);
		cout << (X <= m ? "1" : "0") << endl;
		return 0;
	}

    REP(i,x.length()) d = max(d, (x[i] - '0'));

    ll ok = d;
    ll ng = 1LL << 60;
    while(ok+1 < ng){
        ll mid = (ok + ng) / 2;
        if(chk(mid)) ok = mid;
        else ng = mid;
    }

    cout << ok - d << endl;
    return 0;
}