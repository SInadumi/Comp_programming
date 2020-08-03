#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int A[201];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int res = 0;
    while (true)
    {
        bool flug = false;
        for (int j = 0; j < N; j++)
        {
            if (A[j] % 2 != 0)
                flug = true;
        }
        if (flug) break;

        for(int i=0;i<N;i++){
            A[i] /= 2;
        }
        res++;

    }
    cout << res << endl;
    return 0;
}