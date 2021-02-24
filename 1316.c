#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int flag[26] = { 0 };
	int n;
	char s[101];
	int i,j = 0;
	int len = 0;
	int cnt = 0;
	int flag1 = 0;

	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		gets(s);
		len = strlen(s);

		for (j = 0; j < len-1; j++)
		{
			if (s[j] == s[j + 1])
			{
				flag[s[j] - 'a'] = 1;
			}
			else
			{
				if (flag[s[j+1] - 'a'] == 0)
				{
					flag[s[j] - 'a'] = 1;
					flag[s[j+1] - 'a'] = 1;
				}
				else
				{
					flag1 = 1;
					break;
				}
			}
		}
		if (flag1 == 0)
		{
			cnt++;
		}
		for (j = 0; j < 26; j++)
		{
			flag[j] = 0;
		}
		flag1 = 0;
	}

	printf("%d", cnt);


}