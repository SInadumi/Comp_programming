#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

// https://drken1215.hatenablog.com/entry/2020/11/11/203000

int main() {

    string s; cin >> s;
    ll k; cin >> k;
    vector<ll> maps;
    ll ans = 0;
    for(int i = 0; i < s.size();){
        int j = i;
        while(j < s.size() && s[i] == s[j]) j++;
        maps.emplace_back(j-i);
        i = j;
    }
    if(s[0] != s.back()){
        for(auto it : maps) ans += it/2;
        cout << ans * k << endl;
    }else{
        if(maps.size() == 1){
            cout << maps.front() * k / 2 << endl;
            return 0;
        }
        ll left = maps.front(), right = maps.back(), mid = 0;
        for(int i = 1; i < maps.size()-1; i++) mid += maps[i]/2;
        ans = mid * k + (left + right)/2 * (k-1) + left/2 + right/2;
        cout << ans << endl;
    }

    return 0;
}