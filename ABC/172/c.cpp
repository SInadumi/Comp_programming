#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
// 尺取り法
int main(void){
    long int N,M;
    int K;
    cin >> N >> M >> K;
    vector<int> A(N + 10);
    vector<int> B(M + 10);
    rep(i,N){ 
        cin >> A[i];
    }
    rep(i,M){
        cin >> B[i];
    }

    long long int count = 0;
    rep(i,M) count += B[i];
    int ans = 0;
    int j = M;
    for(int i=0;i <= N;i++){
        while(j > 0 && count > K){
            --j;
            count -= B[j];
        }
        if(count > K) break;
        ans = max(ans, i+j);
        if(i == N) break;
        count += A[i];

    }
    cout << ans << endl;
    return 0;
}