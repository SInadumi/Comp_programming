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
    int n, t;
    cin >> n;
    t = n;
    vector<P> a(pow(2,n)+1);
    REP(i, pow(2,n)){
        cin >> a[i].first;
        a[i].second = i;
    }
    while(n != 1){
        vector<P> temp(pow(2,n)+1);
        int j = 0;
        for(int i = 0; i < pow(2,n); i += 2){
            if(a[i].first > a[i+1].first) temp[j] = a[i];
            else temp[j] = a[i+1];
            j++;
        }
        a = temp;
        n--;
    }
    if(a[0].first > a[1].first) cout << a[1].second + 1 << endl;
    else cout << a[0].second+1 << endl;

    return 0;
}