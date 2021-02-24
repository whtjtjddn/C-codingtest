#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char s[101];
	int i, j = 0;
	int len;
	int cnt = 0;

	gets(s);

	len = strlen(s);
	
	for (i = 0; i < len-1; i++)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '-' || s[i + 1] == '=')
			{
				i = i + 1;
			}
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == '-')
			{
				i = i + 1;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=')
			{
				i = i + 2;
			}
		}
		else if (s[i] == 'l' && s[i + 1] == 'j')
		{
			i = i + 1;
		}
		else if (s[i] == 'n' && s[i + 1] == 'j')
		{
			i = i + 1;
		}
		else if (s[i] == 's' && s[i + 1] == '=')
		{
			i = i + 1;
		}
		else if (s[i] == 'z' && s[i + 1] == '=')
		{
			i = i + 1;
		}
		cnt++;
	}
	if (i == len - 1)
	{
		cnt++;
	}

	printf("%d", cnt);
	return 0;
}