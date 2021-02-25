#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[101];
	int alpha[26] = { 0 };

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++)
	{
		alpha[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}

	return 0;

}