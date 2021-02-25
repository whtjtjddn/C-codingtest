#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n;
	int sum = 0;

	scanf("%d", &n);

	while (1)
	{
		if (n % 5 == 0)
		{
			printf("%d", sum + (n / 5));
			break;
		}
		n = n - 3;
		sum++;
		if (n < 0) {
			printf("-1");
			break;
		}
	}


	return 0;
	 
}