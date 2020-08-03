//https://drken1215.hatenablog.com/entry/2019/12/14/171657
// bit全探索
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int H,W,K;
    cin >> H >> W >> K;
    vector<string> c;
    rep(i,H){
        string s;
        cin >> s;
        c.push_back(s);
    }
    ll ans=0;
    // (1 << H) -> 2^H
    for(int maskR = 0;maskR < (1<<H);maskR++){    // {0,1 ... H}の探索
        for(int maskC = 0;maskC < (1<<W);maskC++){// {0,1 ... W} の探索
            int black =0;
            for(int i=0;i<H;i++){
                for(int j=0;j<W;j++){
                    // if((maskR & (1 << i)) || (maskC & (1 << w)))
                    // maskRとiが完全一致ならば0000 ... 0となり，false
                    if( ((maskR >> i)&1) && ((maskC >> j)&1)){// ビットmaskR,maskCにi,j番目のフラグが立っているかどうか
                        if(c[i][j] == '#') black += 1;
                    } 
                }
            }
            if(black == K) ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}