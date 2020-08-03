#include <bits/stdc++.h>
using namespace std;

//各桁の和を計算する
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(void){
    int N,A,B;
    cin >> N >> A >> B;
    int total = 0;
    for(int i=1 ; i<=N ;i++){
        int sum = 0;
        sum = findSumOfDigits(i);
        if(sum >= A && sum <= B){
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}
