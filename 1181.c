#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int strlength[20000] = { 0 };
char **str;

void quickSort(char **crr, int arr[], int left, int right)
{
	int L = left;
	int R = right;
	int pivot = (left + right) / 2;
	int temp = 0;
	char tmp[51];
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

				strcpy(tmp, crr[L]);
				strcpy(crr[L], crr[R]);
				strcpy(crr[R], tmp);

			}
			L++;
			R--;
		}
		if (left < R)
			quickSort(crr, arr, left, R);
		if (right > L)
			quickSort(crr, arr, L, right);
	}

}
void quickSortString(char** crr, int arr[], int left, int right)
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
					temp = arr[L];
					arr[L] = arr[R];
					arr[R] = temp;

					strcpy(tmp, crr[L]);
					strcpy(crr[L], crr[R]);
					strcpy(crr[R], tmp);

				}
				L++;
				R--;
			}
		
		if (left < R)
			quickSortString(crr,arr, left, R);
		if (right > L)
			quickSortString(crr, arr, L, right);
	}

}

int main()
{
	int n;
	int i, j = 0;
	char tmp[51];
	int itmp = 0;
	int cnt[51] = { 0 };

	scanf("%d", &n);
	getchar();

	str = (char**)malloc(sizeof(char*) * n);
	for (i = 0; i < n; i++)
	{
		str[i] = (char*)malloc(sizeof(char) * 51);
	}


	for (i = 0; i < n; i++)
	{
		scanf("%s", str[i]);
		strlength[i] = strlen(str[i]);
		cnt[strlength[i]]++;
	}
	

	quickSort(str, strlength, 0, n - 1);

	for (i = 0; i < 50; i++)
	{
		quickSortString(str, strlength, cnt[i],cnt[i+1]);
	}

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (strcmp(str[i], str[i + 1]) == 0)
			{
				continue;
			}
		}
		printf("%s\n", str[i]);
	}
	
	return 0;
}