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

string run_length_decode(vector<pair<char,int>> c){
    string ret;
    for(auto i : c){
        REP(j, i.second){
            ret.push_back(i.first);
        }
    }
    return ret;
}