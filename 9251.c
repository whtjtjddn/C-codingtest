#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>


int table[1001][1001] = { 0, };

int main()
{
	char str1[1001];
	char str2[1001];
	int len1;
	int len2;
	int max = 0;
	int i,j = 0;
	char str1_t[1002];
	char str2_t[1002];

	scanf("%s", str1);
	scanf("%s", str2);

	str1_t[0] = '0';
	str1_t[1] = '\0';

	str2_t[0] = '0';
	str2_t[1] = '\0';

	len1 = strlen(str1);
	len2 = strlen(str2);

	strcat(str1_t, str1);
	strcat(str2_t, str2);

	for (i = 1; i < len1+1; i++)
	{
		for (j = 1; j < len2+1; j++)
		{
			if (str1_t[i] == str2_t[j])
			{
				table[i][j] = table[i - 1][j - 1] + 1;
			}
			else
			{
				if (table[i - 1][j] > table[i][j - 1])
				{
					table[i][j] = table[i - 1][j];
				}
				else
				{
					table[i][j] = table[i][j-1];
				}
			}
		}
	}
	
	printf("%d", table[len1][len2]);


	return 0;
}