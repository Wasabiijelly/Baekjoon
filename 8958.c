#include <stdio.h>
#include <string.h>
int main()
{
	char arr[81] = { '\0' };
	int no,i,j,k,cnt=0;

	scanf("%d", &no);
	getchar();//���� ����^^
	k = 0;
	while (k < no) {

		gets(arr);//arr[i]�ƴ�
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
		printf("%d\n", cnt);//��� �ݺ����� ������
		cnt = 0;
		k++;
	}
	
}