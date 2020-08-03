#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> A(N+10,0);
    int S = 0;
    for(int i=0;i<N;i++){
        cin >> A[i];
        S ^= A[i];
    }

    for(int i=0;i<N;i++){
        cout << (A[i]^S) << " ";
    }
    return 0;
}