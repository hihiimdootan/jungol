#include<stdio.h>

int cc()
{
	int num;
	int odd = 0, even = 0;

	while (1)
	{
		scanf("%d", &num);
		
		if (num == 0)
		{
			break;
		}

		if (num % 2 != 0) {
			odd++;
		}
		else {
			even++;
		}
	}

	printf("odd : %d\neven : %d", odd, even);

	return 0;
}