#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, Y;
    cin >> N >> Y;
    int yukiti = -1;
    int itiyou = -1;
    int hideyo = -1;
    /* 計算量の爆発
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if((i+j+k == N) && (i*10000+j*5000+k*1000 == Y)){
                    yukiti = i;
                    itiyou = j;
                    hideyo = k;
                }
            }
        }
    }
*/
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j+i <= N; j++)
        {
            int k=N-i-j;
            int total=i * 10000 + j * 5000 + k * 1000;
                
            if (total == Y)
            {
                yukiti = i;
                itiyou = j;
                hideyo = k;
            }
        }
    }
    cout << yukiti << " "<< itiyou << " " << hideyo << endl;
    return 0;
}