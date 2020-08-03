#include<iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int ans = 1;
	cin >> n;

	vector<int> x(n + 1);
	int num = n; // 素因数分解する変数num 

	for (int i = 2; i <= n; i++) {
		while (num%i == 0) { // 素数で割り切れなくなるまで割っていく
			x.at(i)++; //割った個数を配列に足す
			num /= i;
		}
	}

	for (int i = 2; i <= n; i++)
	{	
		ans *= x.at(i) + 1; //それぞれを+1して掛けていく
	}
	cout << ans << endl;
	return 0;
}