#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
const int M = 10000001;
ll a[M];
/*int main() {
    int N;
    cin >> N;
    fill(a, a + M, 1);
    for (ll i = 2; i < M; i++) {
        for (ll j = 1; i * j < M; j++) {
            a[i * j]++;
        }
    }
    ll ans = 0;
        for(long long i=1;i<=N;i++){
        ans += i * a[i];
    }
    cout << ans << "\n";
    return 0;
}*/
int main(void){
    long long int N;
    cin >> N;

    long long int ans = 0;
    long long temp_N = N;
    for(long long int i=1;i<=N;i++){
        long long int g = temp_N*(temp_N+1)/2;
        ans += i * g;
        temp_N = N/(i+1);
    }
    cout << ans << endl;
    return 0;
}

    //long long int N;
    //cin >> N;

    //long long int ans = 0;

    /*for(int i=1; i<=N;i++){
        int Y = floor(N/i);
        long temp = Y*(Y+1)*i/2;
        ans += temp;
    }*/

    /*for(int i=1;i<=N;i++){
        unsigned long long int g = temp_N*(temp_N+1)/2;
        ans += i*g;
        temp_N = N/(i+1);
    }*/
    /*long long a[N+10];
    fill(a,a+N,1);
    for(long long i =2 ;i<N;i++){
        for(long long j=1;i*j < N;j++){
            a[i*j]++;
        }
    }
    for(long long i=1;i<N;i++){
        ans += i * a[i];
    }

    cout << ans << endl;

    return 0;*/