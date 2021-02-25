#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quickSort(int arr[], int left, int right)
{
	int L = left;
	int R = right;
	int pivot = 0;
	int temp = 0;
	char tmp[51];

	srand(time(NULL));

	pivot = (rand() % (right - left)) + left;
	
	while (L <= R)
	{
		while (arr[L] < arr[pivot])
		{
			L++;
		}
		while (arr[R] > arr[pivot])
		{
			R--;
		}
		if (L <= R)
		{
			if (L != R)
			{
				temp = arr[L];
				arr[L] = arr[R];
				arr[R] = temp;

			}
			L++;
			R--;
		}
		if (left < R)
			quickSort( arr, left, R);
		if (right > L)
			quickSort( arr, L, right);
	}

}
int main()
{
	int n;
	int i, j;
	int time[1000];
	int sum = 0;
	int total = 0;
	int tmp = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &time[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (time[i] < time[j])
			{
				tmp = time[i];
				time[i] = time[j];
				time[j] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + time[i];
		total = total + sum;
	}

	printf("%d", total);


	return 0;
}