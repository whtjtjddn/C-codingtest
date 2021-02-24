#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int a,b,c;
	int i = 0;
	int mul = 1;
	int num[10] = { 0 };
	int rest;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	mul = a * b * c;

	while (mul != 0)
	{
		rest = mul % 10;
		num[rest]++;
		mul = mul / 10;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}

	return 0;

}