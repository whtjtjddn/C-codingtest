#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char str[51];
	int i, j = 0;
	int num[50] = { 0 };
	int len;
	int sum = 0;
	int tmp = 0;
	int min = 0;

	scanf("%s", str);
	
	len = strlen(str);

	for (i = 0; i < len+1; i++)
	{
		if (str[i] == '-' || i == len)
		{
			sum += tmp;
			num[j] = sum;
			j++;
			tmp = 0;
			sum = 0;
		}
		else if (str[i] == '+')
		{
			sum = sum + tmp;
			tmp = 0;
		}
		else
		{
			tmp = tmp * 10;
			tmp = tmp + (str[i] - '0');
		}
	}
	
	min = num[0];

	for (i = 1; i < j; i++)
	{
		min = min - num[i];
	}

	printf("%d", min);

	return 0;
}