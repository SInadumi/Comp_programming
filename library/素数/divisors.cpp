#include <vector>

std::vector<int> divisors(int n) {
    std::vector<int> res;
    for(int i = 1; i*i <= n; ++i) {
        if(n % i != 0) continue;
        res.push_back(i);
        if(n/i == i) continue; // 上の行で追加済み。
        res.push_back(n/i);
    }
    return res;
}