#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int num[10];
	int cnt = 0;
	int tmp = 0;

	scanf("%d", &n);

	while (n != 0)
	{
		num[cnt] = n % 10;
		n = n / 10;
		cnt++;
	}

	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < i; j++)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	for (int i = 0; i < cnt; i++)
	{
		printf("%d", num[i]);
	}

	return 0;
}