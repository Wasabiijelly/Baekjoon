#include <iostream>
#include <string>
using namespace std;
int main() {
	string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	string croatia;
	int cnt = 0, f_index, sum = 0, s_index ;

	getline(cin, croatia);
	for (int i = 0; i < 8; i++) {
		s_index = 0;//
		f_index = 0;
		for (int j = 0; ; j++) {      //���⿡ f_index == -1 �־����� absort() has been called ����
			f_index = croatia.find(arr[i],s_index);//���� ó�� ���⼭ -1�Ǹ� �� �� ������ ����ǹ���
			if (f_index == -1)  
				break;
		
			if (i == 2) {
				croatia.replace(f_index, 3, "   ");
			}
			int len = arr[i].length();
			cnt++;
			//cout << arr[i] <<' '<<cnt<<' '<<f_index+1<< endl;
			sum += len;
			s_index = f_index + 1;
		}
		
	}

	cnt += croatia.length() - sum;
	cout << cnt;
}
//���⼭erase�� f_index�� -1�̿������� �׷��� ���� ����ǰ�?(absort() has been called)
//dz= �̶� z= �ߺ����� ����x -> replace
//s_index�� ���� �� 1.f_index�ȴ���	 2.+= f_index+len �̶�� �ؼ� ���� ������Ŵ