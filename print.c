#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void quickSortString(char** crr, int left, int right)
{
	int L = left;
	int R = right;
	int pivot = (left + right) / 2;
	int temp = 0;
	char tmp[51];

	while (L <= R)
	{

		while (strcmp(crr[L], crr[pivot]) < 0)
		{
			L++;
		}
		while (strcmp(crr[R], crr[pivot]) > 0)
		{
			R--;
		}
		if (L <= R)
		{
			if (L != R)
			{

				strcpy(tmp, crr[L]);
				strcpy(crr[L], crr[R]);
				strcpy(crr[R], tmp);

			}
			L++;
			R--;
		}

		if (left < R)
			quickSortString(crr,left, R);
		if (right > L)
			quickSortString(crr, L, right);
	}

}

int main()
{
	int n, m;
	int i, j;
	char** listen;
	char tmp[21];
	int cnt = 0;

	scanf("%d %d", &n, &m);

	listen = (char**)malloc(sizeof(char*) * (m+n));
	for (i = 0; i < (m + n); i++)
	{
		listen[i] = (char*)malloc(sizeof(char) * 21);
	}


	for (i = 0; i < n + m; i++)
	{
		scanf("%s", listen[i]);
	}

	quickSortString(listen, 0, n+m-1);

	for (i = 0; i < m+n; i++)
	{
		if (strcmp(listen[i],listen[i+1]) == 0)
		{
			cnt++;
			i = i + 1;
		}
	}
	printf("%d\n", cnt);
	for (i = 0; i < m + n; i++)
	{
		if (strcmp(listen[i], listen[i + 1]) == 0)
		{
			printf("%s\n", listen[i]);
			i = i + 1;
		}
	}

	return 0;
}