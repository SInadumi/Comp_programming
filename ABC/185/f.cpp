#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
const ll infl = 1LL << 60;
#define PI acos(-1)
#define fore(i,a) for(auto &i:a)
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
// Segment木
struct SegmentTree{
    private:
        int n;
        vector<ll> node;
    public:
        SegmentTree(vector<ll> v) {
            int sz = v.size();
            n = 1; while(n < sz) n *= 2;
            node.resize(2*n-1, infl);
            for(int i=0; i<sz; i++) node[i+n-1] = v[i];
            for(int i=n-2; i>=0; i--) node[i] = cmp(node[2*i+1], node[2*i+2]);
        }
        ll cmp(ll a, ll b){
            return a^b;
        }
        void set(int x, ll v){
            x += (n-1);
            node[x] ^= v;
            while(x > 0){
                x = (x-1)/2;
                node[x] = cmp(node[2*x+1], node[2*x+2]);
            }
        }
        ll get(int a, int b, int k = 0, int l = 0, int r = -1){
            if(r < 0) r = n;
            if(r <= a || b <= l) return 0;
            if(a <= l && r <= b) return node[k];
            ll vl = get(a,b,2*k+1,l,(l+r)/2);
            ll vr = get(a,b,2*k+2,(l+r)/2,r);
            return cmp(vl,vr);
        }

};
int main() {
    int n,q; cin >> n >> q;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    SegmentTree s(a);
    vector<ll> ans;
    REP(i,q){
        ll t,x,y; cin >> t >> x >> y;
        x--;
        if(t == 1){
            s.set(x,y);
        }
        else{
            cout << s.get(x,y) << endl;
            ans.emplace_back(s.get(x,y));
        }
    }

    return 0;
}