#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    long long sum = 0;
    vector<long long> bucket(110000, 0);
    for (int i = 0; i < N; ++i) {
        long long A; cin >> A;
        sum += A;
        bucket[A]++;
    }
        
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        long long B, C; cin >> B >> C;
        sum += (C - B) * bucket[B];
        bucket[C] += bucket[B];
        bucket[B] = 0;
        cout << sum << endl;
     }
     return 0;
}