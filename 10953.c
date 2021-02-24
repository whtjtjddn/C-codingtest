#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char** str;
	int n;
	int sum = 0;

	scanf("%d", &n);
	getchar();

	str = (char**)malloc(sizeof(char*)*n);
	
	for (int i = 0; i < n; i++)
	{
		str[i] = (char*)malloc(sizeof(char) * 4);
	}

	for (int i = 0; i < n; i++)
	{
		gets(str[i]);
	}

	for (int i = 0; i < n; i++)
	{
		sum = (str[i][0] - '0') + (str[i][2] - '0');
		printf("%d\n", sum);
	}
	
	return 0;
}