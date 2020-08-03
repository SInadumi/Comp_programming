#include <bits/stdc++.h>
using namespace std;

int main (void){
    string s;
    cin >> s[0] >> s[1] >> s[2] ;
    int count=0;
    if(s[0] == '1') count++;
    if(s[1] == '1') count++;
    if(s[2] == '1') count++;

    cout << count << endl;

    return 0;
}