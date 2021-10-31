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

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,q; cin >> n >> q;
    vector<P> train(n,{INF32,INF32});
    vector<deque<ll>> ans;
    REP(i,q){
        int f,x,y; cin >> f;
        if(f == 1){
            cin >> x >> y; x--, y--;
            train[x].second = y;
            train[y].first = x;
        }else if(f == 2){
            cin >> x >> y; x--, y--;
            train[x].second = INF32;
            train[y].first = INF32;
        }else{
            cin >> x; x--;
            deque<ll> t;
            int prev = train[x].first, next = train[x].second;
            t.push_back(x);
            while(prev != INF32){
                t.push_front(prev);
                prev = train[prev].first;
            }
            while(next != INF32){
                t.push_back(next);
                next = train[next].second;
            }
            ans.push_back(t);
        }
    }
    FORE(it,ans){
        cout << SIZE(it) << ' ';
        FORE(i,it){
            cout << i + 1 << ' ';
        }
        cout << endl;
    }
    return 0;
}