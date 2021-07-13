#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,I) for(const auto &(i):(I))
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
    return true;
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll n,k; cin >> n >> k;
    ll a1 = k % n;
    ll a2 = k / n;
    vector<P> a(n);
    REP(i,n){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(ALL(a));
    REP(i,n){
        if(a1 > 0){
            a[i].first = a2 + 1;
            a1--;
        }else{
            a[i].first = a2;
        }
    }
    sort(ALL(a), cmp);
    REP(i,n){
        cout << a[i].first<< endl;
    }
    return 0;
}
/*
きれいなコード
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
 
int main() {
  int N;
  long long K;
  cin >> N >> K;
 
  vector<int> a(N);
  for (auto& x : a) cin >> x;
 
  vector<int> ord(N);
  iota(begin(ord), end(ord), 0);
  sort(begin(ord), end(ord), [&](int i, int j) { return a[i] < a[j]; });
 
  vector<long long> answer(N, K / N);
  for(int i = 0; i < K % N; i++) answer[ord[i]]++;
 
  for(auto&x : answer) cout << x << "\n";
}
*/