#pragma warning(disable:4996)
#include <stdio.h>
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int n;
	int step[301] = { 0 };
	int dynamic[301];
	int i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &step[i]);
	}

	dynamic[0] = step[0];
	dynamic[1] = max(step[0],step[0] + step[1]);
	dynamic[2] = max(step[1] + step[2], step[0] + step[2]);

	for (i = 3; i < n; i++)
	{
		dynamic[i] = max(dynamic[i - 2] + step[i], dynamic[i - 3] + step[i-1] + step[i]);
	}


	printf("%d", dynamic[n-1]);
	
	return 0;
}