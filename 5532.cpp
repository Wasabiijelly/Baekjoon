#include <iostream>
using namespace std;
int main() {
	int day, tkor, tmath, kor, math;
	int dkor, dmath, max;
	cin >> day >> tkor >> tmath >> kor >> math;

	dkor = tkor / kor;
	if (tkor%kor != 0)
		dkor += 1;//그냥 +1 만 하면 dkor값 안바뀜! ++을 하던가;;

	dmath = tmath / math;
	if (tmath%math != 0)
		dmath += 1;

	max = dkor > dmath ? dkor : dmath;

	cout << day - max;
}