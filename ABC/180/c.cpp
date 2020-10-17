#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define IINF 1e9

// https://algo-logic.info/divisor/#toc_id_1_2
int main(void){
    ll n;
    cin >> n;
    vector<ll> numbers;
    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            numbers.push_back(i);
            if(i * i != n) numbers.push_back(n/i);
        }
    }
    sort(numbers.begin(), numbers.end());
    for(auto it : numbers){
        cout << it << endl;
    }
    return 0;
}