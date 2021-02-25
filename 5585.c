#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int money[6] = {500,100,50,10,5,1};
	int rest;
	int cnt = 0;
	int num = 0;

	scanf("%d", &n);

	rest = 1000 - n;

	while (1)
	{
		if (rest % money[num] == 0)
		{
			printf("%d", rest / money[num] + cnt);
			break;
		}
		if (rest - money[num] < 0)
		{
			num = num + 1;
		}
		else
		{
			rest = rest - money[num];
			cnt++;
		}
	}
	return 0;
}