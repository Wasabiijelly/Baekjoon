#include <iostream>
#include <string>
using namespace std;
int main() {
	int T , cnt = 0;
	char beforeChar = 'A', nowChar;
	bool a = true;
	string s;
	
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		int alphabet[26] = {};
		getline(cin, s);
		int len = s.length();
		if (len <= 2)
			cnt++;
		else {
			for (int j = 0; j < len; j++) {
				nowChar = s[j];
				if (alphabet[nowChar - 97] == 0 || beforeChar == nowChar) {
					//cout << beforeChar << ' ' << nowChar << endl;
					alphabet[nowChar - 97]++;
					beforeChar = nowChar;
				}
				else { a = false; break; }
			}
			if (a) 
				cnt++;
			else {
				a = true;
			}
		}
	}
	cout << cnt;
	return 0;
}
