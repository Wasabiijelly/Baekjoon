#include <stdio.h>
#include <string.h>
int main()
{
	char arr[81] = { '\0' };
	int no,i,j,k,cnt=0;

	scanf("%d", &no);
	getchar();//버퍼 비우기^^
	k = 0;
	while (k < no) {

		gets(arr);//arr[i]아님
		for (i = 0; i < strlen(arr); i++)
		{
			if (arr[i] == 'X')
				continue;
			else {
				cnt++;
				for (j = 0; arr[i - j - 1] == 'O'; j++)
					cnt++;
			}	
		}
		printf("%d\n", cnt);//어느 반복문에 있을지
		cnt = 0;
		k++;
	}
	
}