#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int A,B,C;
    cin >> A ;
    cin >> B;
    cin >> C ;
    int X;
    cin >> X;
    int count=0;
    int temp=0;
    for(int i=0 ; i <= A ;i++){
        for(int j=0;j<=B;j++){
            for(int k=0;k<=C;k++){
                temp = 500*i+100*j+50*k;
                if(temp == X) count++;
                temp = 0;
            }
        }
    }
    cout << count << endl;

    return 0;
}