#include <bits/stdc++.h>
using namespace std;

int main(void){
    unsigned long long int A;
    double B;   //double型　－＞有効数字15,16桁
    //最低18桁以上の有効数字がほしい
    cin >> A >> B;
    long long int  B100 = (long long)(B*100 + 0.001);
    cout << A*B100 / 100 << endl;
    return 0;
}