#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N,K;
    int p[1010];
    cin >> N >> K;
    for(int i=0;i<N;i++){
        cin >> p[i];
    }
    sort(p,p+N);

    int total=0;
    for(int j=0;j<K;j++){
        total += p[j];
    }
    cout << total << endl;

    return 0;
}