#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N,K;
    cin >> N >> K;
    //一般化して　すべての組み合わせ　= K*(K-1)^(N-1)
    int num = K;
    for(int i=1;i<N;i++){
        num *= (K-1);
    }
    cout << num << endl; 
    return 0;
}