#include <iostream>
using namespace std;
int main() {
	int day, tkor, tmath, kor, math;
	int dkor, dmath, max;
	cin >> day >> tkor >> tmath >> kor >> math;

	dkor = tkor / kor;
	if (tkor%kor != 0)
		dkor += 1;//�׳� +1 �� �ϸ� dkor�� �ȹٲ�! ++�� �ϴ���;;

	dmath = tmath / math;
	if (tmath%math != 0)
		dmath += 1;

	max = dkor > dmath ? dkor : dmath;

	cout << day - max;
}