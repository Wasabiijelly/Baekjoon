#include <stdio.h>
int main()
{
	int N, pri[32], val[32], K, no, num[32];
	int i,wal,sum_v=0,sum_p=0;

	scanf("%d", &N);
	for (i = 0; i < N; i++) 
		scanf("%d", &pri[i]);
	for (i = 0; i < N; i++)
		scanf("%d", &val[i]);
	scanf("%d", &K);
	scanf("%d", &no);
	if (no > 0) {
		for (i = 0; i < no; i++)
			scanf("%d", &num[i]);
	}

	for (i = 0; i < K; i++)
	{
		sum_v += val[num[i]];
		sum_p += pri[num[i]];
	}
		
	if(K>)
	if (K <= sum_v)
		printf("0");
	else if
	{

	}
	

}