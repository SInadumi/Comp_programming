#include <bits/stdc++.h>
using namespace std;
//ctrl + shift +p -> 「shell」 wslコンソールの選択
//ctrl + shift + @ -> wslコンソールの表示
//ctl + shift + B -> コンパイル problem.exeの生成
//f5 -> デバッグ
/*
Continue/Pause	F5	次のブレークポイントまで進める/プログラムを止める
Step Over	F10	現在行を実行する
Step Into	F11	現在行を実行する．
Step Out	Shift+F11	現在実行中の関数を抜けるまで処理を進める．
Restart	Ctrl+Shift+F5	プログラムを最初からやり直す．
Stop	Shift+F5	デバッグを終了する．
*/
int main(void)
{
    int a, b;
    cin >> a >> b;
    if ((a * b) % 2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;    
}