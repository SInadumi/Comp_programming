#include <bits/stdc++.h>
using namespace std;

int main(void){
    int X,N;
    cin >> X >> N;
    int p[N+10];
    for(int i=0;i<N;i++){
        int s;
        cin >> p[i];
    }
    int min = 110;
    int p_temp;
    for(int i=0;i<=100;i++){
        int p_temp_min = X + (-1) * i;
        int p_temp_plus = X + i;
        bool can1 = true;
        bool can2 = true;
        for(int j=0;j<N;j++){
            if(p[j] == p_temp_min){
                can1 = false;
            }
            if(p[j] == p_temp_plus){
                can2 = false;
            }
        }
        if(can1) {
            p_temp = p_temp_min;
            break;
        }
        if(can2){
            p_temp = p_temp_plus;
            break;
        }
    }
    cout << p_temp << endl;
    return 0;
}