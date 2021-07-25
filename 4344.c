#include <stdio.h>
int main()
{
	int tc,i,no,k=0,sum,cnt;
	double ave,per;
	int arr[1000];

	scanf("%d", &tc);
	
	while (k < tc)
	{
		sum = 0;
		cnt = 0;//이거 두개 안함,,
		scanf("%d", &no);
		for (i = 0; i < no; i++)
			scanf("%d", &arr[i]);
		for (i = 0; i < no; i++)
			sum += arr[i];
		ave = (double)sum / no;
		for (i = 0; i < no; i++) {
			if (arr[i] > ave)
				cnt++;
		}
		per = ((double)cnt / no) * 100;
		printf("%.3lf%%\n", per);
		k++;
	}
}