#include <stdio.h>
int main()
{
	int a, b, c,mul,len,i,cnt=0;
	int arr[20] = {0};
	int count[10] = { 0 };
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	mul = a * b*c;
	for (i = 0,len=mul;len>=1; i++)
	{
		len = len / 10;
		cnt++;
	}
	
	for (i = 0;i<cnt; i++)
	{
		arr[cnt-1-i] = mul % 10;
		mul /= 10;
	}
	for (i = 0; i < cnt; i++) {
		switch (arr[i]) {
		case 0:
			count[0]++;
			break;
		case 1:
			count[1]++;
			break;
		case 2:
			count[2]++;
			break;
		case 3:
			count[3]++;
			break;
		case 4:
			count[4]++;
			break;
		case 5:
			count[5]++;
			break;
		case 6:
			count[6]++;
			break;
		case 7:
			count[7]++;
			break;
		case 8:
			count[8]++;
			break;
		case 9:
			count[9]++;
			break;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d\n", count[i]);

}