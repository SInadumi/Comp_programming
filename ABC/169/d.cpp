#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long> > prime_factors(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main(void){
    long long int N;
    cin >> N ;
    long long int count=0;
    auto pf = prime_factors(N);
    //map<long long int,long long int> res = prime_factors(N);
    for(auto p : pf) {
        int res1 = p.first;
        int res2 = p.second;
        //cout << res1 << " " << res2 << endl;
         
        long long int tmp = 0, cur = 1;
        while (res2 >= cur) res2 -= cur++, ++tmp;
        count += tmp;
        
    }
    cout << count << endl;

    return 0;
}