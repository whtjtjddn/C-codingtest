#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int len;
	int i, j = 0;

	scanf("%s", str);

	len = strlen(str);

	printf("%c", str[0]);

	for (i = 1; i < len; i++)
	{
		if (str[i] == '-')
		{
			printf("%c", str[i + 1]);
		}
	}

	return 0;
}