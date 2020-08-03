bool is_prime(int n) {
    if(n == 1) return false; // 1 は素数ではない。
    for(int i = 2; i*i <= n; ++i) { // 2 <= i <= sqrt(n) に約数があれば、
        if(n % i == 0) return false; // n は素数ではない
    }
    return true;
}