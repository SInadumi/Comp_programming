#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i, n) FOR(i,0,n)
typedef pair<int,int> P;

int dw[] = {-1,1,0,0};
int dh[] = {0,0,-1,1};
int H,W,Ch,Dh,Cw,Dw,pre_cost;
vector<vector<char>> S;
vector<vector<int>> costs;
queue<P> que;
queue<P> vis;

void StepA(int h,int w){
    S[h][w] = '#';
    FOR(i,0,4){
        
        int tmp_h = h + dh[i];
        int tmp_w = w + dw[i];
        if(tmp_h < 0 || tmp_w < 0 || tmp_h > H-1 || tmp_w > W-1) continue;
        if(S[tmp_h][tmp_w] == '.'){
            vis.push(P(tmp_h,tmp_w));
            costs[tmp_h][tmp_w] = pre_cost;
            StepA(tmp_h,tmp_w);
        }
    }
}

int main(void){
    cin >> H >> W;
    cin >> Ch >> Cw;
    cin >> Dh >> Dw;
    Ch--;Cw--;Dh--;Dw--;
    S = vector<vector<char>>(H, vector<char>(W));
    costs.assign(H,vector<int>(W,-1));
    REP(i,H){
        REP(j,W){
            cin >> S[i][j];
            if(S[i][j] == '#') costs[i][j] = 999;
        }
    }

    que.push(P(Ch,Cw));
    pre_cost = 0;
    //costs[Ch][Cw] = pre_cost;

    while(!que.empty() || !vis.empty()){
        //StepA
        while(!que.empty()){
            P tmp = que.front();
            que.pop();
            vis.push(tmp);
            costs[tmp.first][tmp.second] = pre_cost;
            StepA(tmp.first,tmp.second);
        }
        //StepB
        while(!vis.empty()){
            P tmp = vis.front();
            vis.pop();
            for(int i = -2;i <= 2;i++){
                for(int j = -2;j <= 2;j++){
                    int tmp_h = tmp.first + i;
                    int tmp_w = tmp.second + j;
                    if(tmp_h < 0 || tmp_w < 0 || tmp_h > H-1 || tmp_w > W-1) continue;
                    if(S[tmp_h][tmp_w] == '.'){
                        que.push(P(tmp_h,tmp_w));
                    }
                }
            } 
        }
        pre_cost++;
    }

    cout << costs[Dh][Dw] << endl;
    return 0;
}

//TLE
/*int main(void){
    int H,W,Ch,Dh,Cw,Dw;
    cin >> H >> W;
    cin >> Ch >> Cw;
    cin >> Dh >> Dw;
    Ch--;Cw--;Dh--;Dw--;
    vector<string> S(H);
    REP(i,H){
        cin >> S[i];
    }
    ll ans = 0;
    int dh=1,dw=1;
    if(Ch > Dh) dh = -1;
    if(Cw > Dw) dw = -1;
    while(Ch != Dh && Cw != Dw){
        bool warp = false;
        int t_Ch = Ch,t_Cw = Cw;
        if(S[Ch+dh][Cw] == '#' && S[Ch][Cw+dw] == '#'){
            warp = true;
            ans++;
        }
        //int dist = (Dh - Ch) + (Dw - Cw);
        pair<int,int> tmp[H];
        int num = 0;

        if(warp){
            for(int i = Ch-2;i <= Ch+2;i++){
                for(int j=Cw-2;j <= Cw+2;j++){
                    if(i > H-1 || j > W-1) continue;
                    if(i < 0 || j < 0) continue;
                    if(i == Ch && j == Cw) continue;
                    if(S[i][j] == '#') continue;
                    tmp[num].first = i;
                    tmp[num].second = j;
                    num++;
                }
            }
        //queなどを使って，ワープで到達できる位置の内，最もdistが小さいものを選択
        int ddist = (tmp[0].first - Ch) + (tmp[0].second - Cw);
        Ch = tmp[0].first;
        Cw = tmp[0].second;
        FOR(i,1,num){
            //int ddist = (tmp[i].first - Ch) + (tmp[i].second - Cw);
            if(ddist >= (tmp[i].first - Ch) + (tmp[i].second - Cw)){
                Ch = tmp[i].first;
                Cw = tmp[i].second;
            }
        }
        }
        // if(Ch > Dh) dh = -1;
        // else dh = 1;
        // if(Cw > Dw) dw = -1;
        // else dw = 1;

        if(Ch == Dh && Cw == Dw) break;
        if(S[Ch+dh][Cw] == '.') Ch = Ch + dh;
        if(S[Ch][Cw+dw] == '.') Cw = Cw + dw;

        if(t_Ch == Ch && t_Cw == Cw){
            cout << "-1" << endl;
            return 0;
        }
    }
        cout << ans << endl;

    return 0;
}*/