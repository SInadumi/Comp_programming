//https://www.qoosky.io/techs/eb5f9e6add
#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1001024;

// 結果を格納する変数
int prime[MAXN]; // n 以下の素数のうち i 番目の素数
bool is_prime[MAXN]; // 整数 i が素数であるかどうか
//エラストテネスの篩
int sieve(int n) {
    int res = 0;
    fill(is_prime, is_prime + MAXN, true);
    is_prime[0] = is_prime[1] = false; // 0 と 1 は素数ではない。
    for(int i = 2; i <= n; ++i) {
        if(!is_prime[i]) continue;
        prime[res++] = i;
        for(int j = 2 * i; j <= n; j += i) is_prime[j] = false; // 素数 i の倍数は素数ではない (ふるい(篩)にかける)
    }
    return res;
}

int main() {
    //res : 素数の数
    int res = sieve(100);
    for(int i = 0; i < res; ++i) cout << prime[i] << endl;
    return 0;
}