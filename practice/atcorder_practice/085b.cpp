#include <bits/stdc++.h>
using namespace std;
//バケットソート
int main(void){
    int N;
    cin >> N;
    int D[110];
    for(int i=0;i<N;++i){
        cin >> D[i];
    }
    int bucket[110] = {0};  
    for(int i=0 ; i<N ; ++i){
        bucket[D[i]]++;
    }
    int count=0;
    for(int i=1;i<=100;++i){
        if(bucket[i]){
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}