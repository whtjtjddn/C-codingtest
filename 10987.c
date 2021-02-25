#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int len;
	int i;
	int cnt = 0;

	scanf("%s", str);

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			cnt++;
		}
	}


	printf("%d", cnt);

	return 0;
}