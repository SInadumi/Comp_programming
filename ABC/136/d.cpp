#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
#define INF 1000000000
vector<pair<char,int>> run_length_encode(string s){
    int size = s.size();
    vector<pair<char, int>> ret;
    for(int i = 0; i < size;){
        int j = i+1;
        while(j < size && s[i] == s[j]) j++;
        ret.push_back({s[i], j-i});
        i = j;
    }
    return ret;
}
int main() {

    string s; cin >> s;
    vector<pair<char,int>> c = run_length_encode(s);
    vector<int> ans(s.size(),0);
    int index = 0;
    for(int i = 0;i < c.size(); i += 2){
        int left, right;
        if(c[i].second%2 == 0) left = c[i].second/2;
        else left = c[i].second/2 + 1;
        if(c[i+1].second%2 == 0) right = c[i+1].second/2;
        else right = c[i+1].second/2 + 1;
        int tmp = left + c[i+1].second - right;
        ans[c[i].second-1+index] = tmp;
        tmp = right + c[i].second - left;
        ans[c[i].second+index] = tmp;
        index += c[i+1].second + c[i].second;
    }
    for(auto i : ans){
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}