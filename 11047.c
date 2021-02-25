#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n, k;
	int* arr;
	int cnt = 0;

	scanf("%d %d", &n, &k);

	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	while (1)
	{
		if (k % arr[n - 1] == 0)
		{
			printf("%d",cnt + k / arr[n - 1]);
			break;
		}

		if (k - (arr[n - 1]) < 0)
		{
			n = n - 1;
		}
		else
		{
			cnt++;
			k = k - arr[n - 1];
		}

	}

	return 0;
}