#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned long long int N;
    cin >> N;
    unsigned long long int A[N + 10];
    unsigned long long int ans = 1;
    int ans_over = -1;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if(A[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }
    bool can = true;
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= 1000000000000000000/ans)
        {
        ans *= A[i];
        }
        else{
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;

    return 0;
}