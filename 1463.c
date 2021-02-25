#pragma warning(disable:4996)
#include <stdio.h>

int arr[1000001] = { 0 };

int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
		return a;
}

int dynamic(int a)
{

	if (a == 1)
		return arr[0];
	
	for (int i = 2; i <= a; i++)
	{

		arr[i] = arr[i - 1] + 1;

		if (i % 2 == 0)
		{
			arr[i] = min(arr[i / 2]+1, arr[i]);
		}
		if (i % 3 == 0)
		{
			arr[i] = min(arr[i / 3]+1, arr[i]);
		}
		
	}

	return arr[a];
}

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", dynamic(n));

	return 0;
}