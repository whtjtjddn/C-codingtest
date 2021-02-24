#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int* arr;
	int i, j = 0;
	int n;
	int sum = 0;
	int cnt = 0;

	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		if (cnt == n )
		{
			break;
		}
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
		{
			arr[i - 1] = 0;
			i = i - 2;
			cnt++;
			continue;
		}
		cnt++;
	}

	for (cnt = 0; cnt < i; cnt++)
	{
		sum += arr[cnt];
	}

	printf("%d", sum);


	return 0;
}