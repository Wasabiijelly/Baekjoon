#include <iostream>
using namespace std;
int d(int n) {//12345
	int sum = 0;
	int dev = n;
	sum += n;
	while (true) {
		sum += dev % 10;
		dev /= 10;
		if (dev == 0)
			break;
	}
	return sum;
}

int main() {
	int index;
	int arr[10036] = { 0 };//10036까지 가야함
	for (int i = 1; i < 10001; i++) {//10001까지만 해도 됨
		index = d(i);
		arr[index]++;
	}
	
	for (int i = 1; i < 10001; i++) {
		if (arr[i] == 0)
			cout << i << endl;
	}
}