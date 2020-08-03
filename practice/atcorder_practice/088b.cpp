#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i < N ;i++){
        cin >> A[i];
    }
    int B[N];
    //昇順ソート
    sort(A,A+N,greater<int>());
    int Alice=0;
    int Bob=0;
    for(int i=0;i<N;i++){
        if(i % 2 ==0) Alice += A[i];
        else Bob += A[i];
    }
    cout << Alice - Bob << endl;
    return 0;
}