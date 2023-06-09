#include<bits/stdc++.h>
using namespace std;
void decimaltoanybase(int num, int base) {
	int sum = 0;
	int i = 0;
	while (num > 0) {
		sum = sum + ((num % base) * pow(10, i));
		num = num / base;
		i++;
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