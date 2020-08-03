#include <bits/stdc++.h>
using namespace std;

int main(void){
    long int N;
    cin >> N;
    char sinsu[10000];
    long int i=0;
    while(true){
        int digit = N % 26;
        
        if(N == 0){ 
            break;
            }
        else{
            if(digit == 0){
                digit = 26;
                N = N / 26 -1;
            }
            else{
                N = N /26;
            }
            sinsu[i] = (96 + digit) + '\0';
        }
        i++;
    }
     
    string name;
    name = sinsu;
    reverse(name.begin(),name.end());
   
    cout << name << endl;
    return 0;
}
