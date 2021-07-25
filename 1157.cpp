#include <iostream>
#include <string>
using namespace std;
int main() {
	int alpha[26] = { 0 };
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (isupper(s[i]))
			alpha[s[i] - 65]++;
		else
			alpha[s[i] - 97]++;
	}
	
	int max = 0, cnt = 0;
	for (int i = 1; i < 26; i++) {
		if (alpha[max] == alpha[i]) {
			cnt++;
		}								//if순서 고려해야함
		if (alpha[max] < alpha[i]) {
			max = i;
			cnt = 0;
		}
	}
	if (cnt != 0)
		cout << '?';
	else
		cout << (char)(max + 65);
}