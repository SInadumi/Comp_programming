#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<int,int> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000

bool compare_2nd(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
    return true;
}
int main(void){
    int n,m,q;
    cin >> n >> m >> q;
    vector<P> wv(n);
    vector<int> x(m);
    REP(i,n) cin >> wv[i].first >> wv[i].second;
    sort(wv.begin(),wv.end());
    REP(j,m) cin >> x[j];
    //sort(x.begin(),x.end());
    
    REP(i,q){
        int l,r;
        int ans = 0;
        cin >> l >> r;

        vector<int> X(x.begin(),x.begin()+l-1);
        X.insert(X.end() ,x.begin()+r, x.end());
        sort(X.begin(),X.end());
        priority_queue<int> q;
        auto p = wv.begin();

        for(auto it : X){
            while(p != wv.end() && p->first <= it){
                q.push(p->second);
                p++;
            }
            if(q.size() != 0){
                ans += q.top();
                q.pop();
            }
        }

        cout << ans << endl;
    }
    return 0;
}