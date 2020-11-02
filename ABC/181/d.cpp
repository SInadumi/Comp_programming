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
    string s;
    bool can = false;
    bool two = false, one = false;
    cin >> s;
    if(s.length() == 1) one = true;
    else if(s.length() == 2) two = true;

    vector<int> bucket(10);
    for(auto it : s) bucket[ (int)(it - '0')]++;

    FOR(i,1,1000){
        int a[3] = {-1, -1, -1};
        if(i % 8 != 0) continue;
        int temp_i = i;
        if(i >= 100){ a[0] = (temp_i % 10); temp_i /= 10;}
        if(i >= 10){  a[1] = (temp_i % 10); temp_i /= 10;}
        a[2] = (temp_i % 10); temp_i /= 10;
        if(--bucket[a[0]] >= 0 && a[0] > 0){
            if(one) can = true;
            if(--bucket[a[1]] >= 0 && a[1] > 0){
                if(two) can = true;
                if(--bucket[a[2]] >= 0 && a[2] > 0){
                    cout << "Yes" << endl;
                    return 0;
                }else{
                    bucket[a[2]]++;
                    bucket[a[1]]++;
                    bucket[a[0]]++;
                }
            }else{
                bucket[a[1]]++;
                bucket[a[0]]++;
            }
        }else{
            bucket[a[0]]++;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}