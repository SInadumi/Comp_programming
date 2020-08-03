#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//greedy algorhythum
//prefixがある場合，後ろから探索
string divide[4] = {"dream", "dreamer", "erase", "eraser"};
int main()
{
    string S;
    cin >> S;
    //reverse(反転させる分の文字列の開始，反転させる分の文字列の終わり)　
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++)
    {
        reverse(divide[i].begin(), divide[i].end());
    }
    bool can = true;
    for (int i = 0; i < S.size();)
    {
        bool can2 = false;
        for (int j = 0; j < 4; j++)
        {
            string d = divide[j];
            //s.substr(開始位置(i)，探索数) -> s[i] からs[i+d.size]までの文字列
            if (S.substr(i, d.size()) == d)
            {
                can2 = true;
                i += d.size();
            }
        }
        if (!can2)
        {
            can = false;
            break;
        }
    }
    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}