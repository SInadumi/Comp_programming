#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define EFOR(i,a,b) for(ll i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
ll nums = 10000000000;
 
int main() {

    ll n;
    string t;
    cin >> n >> t;
    if(t == "1"){
        cout << 2*nums << endl;
        return 0;
    }else if(t == "0"){
        cout << nums << endl;
        return 0;
    }
    if(t.size() >= 1 && t.substr(0,1) == "0") nums--,t=t.substr(1);
    else if(t.size() >= 2 && t.substr(0,2) == "10") nums--,t=t.substr(2);
    if(t.size()%3 == 1){
        if(t.substr(t.size()-1) != "1") {
            cout << 0 << endl;
            return 0;
        }
        t = t.substr(0,t.size()-1);
        nums--;
    }
    else if(t.size()%3 == 2){
        if(t.substr(t.size()-2) != "11"){
            cout << 0 << endl;
            return 0;
        }
        t = t.substr(0,t.size()-2);
        nums--;
    }
    for(int i = 0;i < t.size(); i += 3){
        if(t.substr(i,3) != "110"){
            cout << 0 << endl;
            return 0;
        }
    }
    cout << nums - t.size()/3 + 1 << endl;
    return 0;
}