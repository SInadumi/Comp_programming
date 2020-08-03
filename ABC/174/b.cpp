#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    ll N,D;
    cin >> N >> D;
    vector<ll> X,Y;
    rep(i,N){
        ll temp1,temp2;
        cin >> temp1 >> temp2;
        X.push_back(temp1);
        Y.push_back(temp2);
    }
    int cnt=0;
    rep(i,N){
        double dis = 0;
        dis = sqrt(pow(X[i],2)+pow(Y[i],2));
        if(dis <= D) cnt++;
    }
    cout << cnt << endl;

    return 0;
}