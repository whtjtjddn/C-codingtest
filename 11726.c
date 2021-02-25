#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n;
	int count[1001] = { 0 };

	scanf("%d", &n);
	
	count[0] = 1;
	count[1] = 2;

	for (int i = 2; i < n; i++)
	{
		count[i] = (count[i - 1] + count[i - 2])%10007;
	}

	printf("%d", count[n-1]);

	return 0;
}