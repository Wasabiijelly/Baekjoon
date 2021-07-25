#include <stdio.h>
int main()
{
	int mus[8];
	int i,cnt=2;
	
	for (i = 0; i < 8; i++)
		scanf("%d", &mus[i]);

	if (mus[0] == 1) {
		for (i = 1; i < 7; i++) {
			if (mus[i] == cnt)
				cnt++;
			else
				break;
		}
		if (cnt == 8)
			printf("ascending");
		else
			printf("mixed");
	}
	else if (mus[0] == 8) {
		for (i = 1, cnt = 7; i < 7; i++) {
			if (mus[i] == cnt)
				cnt--;			
			else
				break;
		}
		if (cnt == 1)
			printf("descending");
		else
			printf("mixed");
	}
	else
		printf("mixed");
}