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
    int n,k,prev_num = 0;
    string s,ans = "";
    cin >> n >> k >> s;
    deque<char> tmp(n);                     // 辞書式順序に変換した s
    vector<int> s_num(27,0), ans_num(27,0); // アルファベット保存用
    REP(i,n){
        tmp[i] = s[i];
        s_num[s[i] - 'a']++; 
    }
    sort(tmp.begin(),tmp.end());
    ans_num = s_num;

    REP(i,n){

        int next_num = 0;   // 残りの文字列の不一致数
        int e_count = 0;    // eraseするインデックス
        s_num[s[i] - 'a']--;

        for(char it : tmp){
            ans_num[it - 'a']--;
            if(s[i] != it) prev_num++;

            //残りの不一致数の計算
            REP(j,27){
                next_num += min(s_num[j],ans_num[j]);
            }
            next_num = n - 1 - i - next_num;

            if((prev_num + next_num) > k){  // 全体の不一致数が kより大きい
                next_num = 0;
                prev_num--;
                ans_num[it - 'a']++;
            }else{                          
                ans = ans + it;
                break;
            }
            e_count++;
        }
        tmp.erase(tmp.begin() + e_count);
    }
    cout << ans << endl;
    return 0;
}