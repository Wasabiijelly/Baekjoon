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
		for (int j = 0; ; j++) {      //여기에 f_index == -1 넣었더니 absort() has been called 오류
			f_index = croatia.find(arr[i],s_index);//제일 처음 여기서 -1되면 그 값 가지고 실행되버림
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
//여기서erase의 f_index가 -1이였을껀데 그래서 오류 생긴건가?(absort() has been called)
//dz= 이랑 z= 중복으로 세면x -> replace
//s_index값 정할 때 1.f_index안더함	 2.+= f_index+len 이라고 해서 값을 급증시킴