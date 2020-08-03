//https://www.qoosky.io/techs/eb5f9e6add
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long unsigned int ll;

const ll MAXN = 1001024; // b-a < MAXN, sqrt(b) < MAXN

ll prime[MAXN]; // [a,b) の素数のうち i 番目の素数
bool is_prime[MAXN]; // 整数 i が素数であるかどうか
bool is_prime_ab[MAXN]; // 整数 i+a が素数であるかどうか

ll segment_sieve(ll a, ll b) {
    fill(is_prime, is_prime + MAXN, true);
    fill(is_prime_ab, is_prime_ab + MAXN, true);
    for(ll i = 2; i*i <= b-1; ++i) {
        if(!is_prime[i]) continue;
        for(ll j = 2 * i; j*j <= b-1; j += i) is_prime[j] = false; // 素数 i で篩にかける
        for(ll j = a - a%i; j < b; j += i) {
            if(j < a) continue;
            if(is_prime_ab[j-a]) is_prime_ab[j-a] = false; // 素数 i で篩にかける
        }
    }
    ll res = 0;
    for(ll i = a; i < b; ++i) if(is_prime_ab[i-a]) prime[res++] = i;
    return res;
}

int main() {
    ll res = segment_sieve(22801763489, 22801787297);
    for(ll i = 0; i < res; ++i) cout << prime[i] << endl;
    return 0;
}