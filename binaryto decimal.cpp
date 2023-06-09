#include<bits/stdc++.h>
using namespace std;
void binarytodecimal(int num) {
	int sum = 0;
	int i = 0;
	while (num > 0) {
		if ((num % 10) == 1) {
			sum = sum + (pow(2, i));
		}
		i = i + 1;
		num = num / 10;
	}
	cout << sum << endl;
}
int main() {
#ifndef tejas
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int num, base;
	cin >> num >> base;
	decimaltoanybase(num, base);
	return 0;
}