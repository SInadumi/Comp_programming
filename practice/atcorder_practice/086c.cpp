#include <bits/stdc++.h>
using namespace std;
//dt -> 偶数　ならば dist -> 偶数
//dt -> 奇数　ならば dist -> 奇数
int main(void){
    int N;
    cin >> N;
    int T[100010],X[100010],Y[100010];
    T[0] = 0;
    X[0] = 0;
    Y[0] = 0;
    for(int i=1;i<=N;i++){
        cin >> T[i] >> X[i] >> Y[i];
        //cin >> t >> x >> y;
        //このループ内で毎時間ごとシミュレーションするのも有
        /*for(;now < t ; now++){
            if(x != nowx){
                //x方向に近づく
            }
            else if(y != nowy){
                //y方向に近づく
            }
        }
        if(x != nowx || y != nowy){
            can = false;
        }else can =true;
        */
    }
    bool can=true;
    for(int i=0;i<N;i++){
        int dt = T[i+1] - T[i];
        int dist =  abs(X[i+1] - X[i]) + abs(Y[i+1] - Y[i]);
        if(dt < dist){
            can = false;
        }
        if((dt % 2 ) != (dist % 2)){
            can = false;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl; 
    return 0;
}