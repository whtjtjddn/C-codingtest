#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];

	while (gets(s))
	{

		if (s[0] == '\0')
			return 0;

		else
			puts(s);
	}

	return 0;

}