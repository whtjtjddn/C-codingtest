#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	char str[10][11];
	int i, j = 0;
	int tmp = 0;
	int flag = 0;

	gets(s);

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			tmp = 10 * i;
			
			str[i][j] = s[tmp + j];
			if (s[tmp + j] == '\0')
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
		str[i][10] = '\0';
	}
	tmp = i;
	for (i = 0; i < tmp+1; i++)
	{
		puts(str[i]);
	}
}