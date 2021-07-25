#include <iostream>
using namespace std;
void swap(int &a, int &b, int *p) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	for (int i = 0; i < 5; i++)
		cout << p[i] << ' ';
	cout << endl;
}
int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	while(true) {
		if (arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4)
			break;
		for (int j = 0; j < 4; j++) {//j<5라고 하면 배열 제일 마지막 숫자와 arr[5](할당x)된걸 비교하므로 stack currupted나옴
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1], arr);
			}
		}
	}
	return 0;
}