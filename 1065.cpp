#include <iostream>
using namespace std;
bool han(int x) {
	if (x < 100)
		return true;
	if (x == 1000)
		return false;
	int arr[3] = { 0 };
	int div = x, remain, i;
	for (i = 0; i < 3; i++) {
		arr[i] = div % 10;
		div /= 10;
	}
	if (arr[2] - arr[1] == arr[1] - arr[0])
		return true;
	else return false;
}
int main() {
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (han(i))
			sum++;
	}
	cout << sum;
}